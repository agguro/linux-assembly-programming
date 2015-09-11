; Name:     hammingcode
; Build:    nasm -f elf64 -o hammingcode.o hammingcode.asm
;           ld hammingcode.o -o hammingcode
; Run:      ./hammingcode
; Description:
;       shows the 7,4 and 8,4 hammingcode of a given 4 bits dataword
; More info: http://users.cis.fiu.edu/~downeyt/cop3402/hamming.html

BITS 64

[list -]
     %include "unistd.inc"
[list +]

; The programs fixed values, first 4 bits are ignored in the generation of the Hammingcode word
; and the checkbits are cleared.  Also bit 7 isn't used in the Hammingcode word because we can
; only have 3 checkbits for 4 bits data.
; The bit on position 7 is the paritybit for the entire Hammingcode.
; Hammingcode words count the bits from left to right and starting with 1.

     %define DATALENGTH       4
     %define BITSTOIGNORE     4         ; we only can store 8 bits in AL

section .bss
     bitBuffer:     resb      1
     hammingcode:   resb      1
    
section .data
  
     databits:      db 00001011b
  
     title:         db        "Hammingcode demo by Agguro - 2012",10,"Databits       : "
     .length:       equ       $-title
     hamming74:     db        10,"Hamming(7,4)   : "
     .length:       equ       $-hamming74
     hamming84:     db        10,"hamming(8,4)   : "
     .length:       equ       $-hamming84
     endofline:     db        10
     .length:       equ       $-endofline
    
section .text
     global _start
    
_start:

;  Setup of the databits on positions 1,2 and 4 for Hamming(7,4) parity bits
;  Here we prepare the hammingcode WITHOUT the paritybits, we only provide the
;  room for it, to calculate and store later.

Prepare:
     mov       al, BYTE[databits]
     shl       al, BITSTOIGNORE         ; shift significant bits to upper bits of AL
     mov       cl, 1                    ; start at position 1
     xor       bl, bl                   ; processed bits to 0

.bitgroup:     
     clc                                ; clear carrybit
     rcl       ah, 1                    ; shift carrybit into AH
     push      rcx                      ; save current position
      
; process current group of databits depending the position
; for position CL, store CL bits, skip CL bits

.bit:      
     dec       cl                       ; bits to process = position - 1
     cmp       cl, 0                    ; is number of bits to process 0 ?
     jne       .process                 ; no, process the bit
     pop       rcx                      ; restore position
     shl       cl,1                     ; new position = old position x 2
     jmp       Prepare.bitgroup         ; process next set of bits for this position    
.process:    
     shl       ax, 1                    ; no, shift relevant bits into ah
     inc       bl                       ; increment processed bits
     cmp       bl, DATALENGTH           ; processed bits < number of databits?
     jge       .done                    ; no, last bit has been processed, stop procedure
     jmp       Prepare.bit              ; yes, process next bit
      
.done:
     shr       ax,7                     ; adjust bitgroup

; Calculation of the Hammingcode
; ------------------------------
; AL contains the databits with room for the checkbits in the following format
; 00d0dddx    where 0: Hamming(7,4) parity bit,
;                   d: databit,
;                   x: Hamming(8,4,4) paritybit 
Calculate:
     xor       rcx, rcx
     mov       rdx, rax                 ; DX will be the Hammingcode with paritybits
     mov       cl, 1
.nextPosition:
     push      rax
     push      rcx
     dec       cl
     shl       al, cl                   ; shift left bits in place
     pop       rcx
.repeat:
     shl       ax, cl
     shl       al, cl
     cmp       al, 0
     jnz       .repeat
     ; determine the paritybit
     clc                                ; assume parity even
     test      ah, ah
     jpe       .parityEven
     stc                                ; set carryflag indicating that parity is odd
.parityEven:
     push      rcx                      ; save position
     rcl       dh, 1                    ; shift carry into DH
     shl       dl, 1                    ; shift DL one position, eliminating palceholder
     dec       rcx                      ; adjust the data (by left shifting CL by 1 bit)
     shl       dx ,cl                   ; adjust data, most left bit of DL is now paritybitposition
     pop       rcx                      ; restore position     
     ; the paritybit is calculated and put in place, continue calculation
     pop       rax
     shl       cl, 1                    ; next position
     cmp       cl, 4
     jle       .nextPosition    
      
    ; at this point no more bitsets are left so the calculation of the Hammingcode is finished
    ; we just need top calculate the paritybit of the entire hammingcode to transform the Hamming(7,4) in DH to a 
    ; Hamming(8,4) in AL.
      
CalculateParityBit:
     clc                                ; assume parity even
     mov       al, dh                   ; move DH into AL
     test      al, al                   ; test parity
     jpe       .done                    ; parity is even, so no carry
     stc                                ; set carry indicating odd parity
.done:
     rcl       al, 1                    ; shift carrybit into lowest bit of AL
     mov       BYTE[hammingcode], al    ; save the result
      
; Finally we have the Hamming(8,4) code of our 4 bit databits

     mov       rsi, title
     mov       rdx, title.length
     call      Write
     mov       al, BYTE[databits]
     shl       al, 4
     mov       cl, 4
     call      WriteBits
     mov       rsi, hamming74
     mov       rdx, hamming74.length
     call      Write
     mov       al, BYTE[hammingcode]
     mov       cl, 7
     call      WriteBits
     mov       rsi, hamming84
     mov       rdx, hamming84.length
     call      Write    
     mov       al, BYTE[hammingcode]
     mov       cl, 8
     call      WriteBits
     mov       rsi, endofline
     mov       rdx, endofline.length
     call      Write
     syscall   exit, 0

; Write
; Write a string pointed by RSI with length RDX to STDOUT
Write:
     push      rax
     push      rcx
     syscall   write, stdout
     pop       rcx
     pop       rax
     ret    

; WriteBits
; Converts and writes a dataword in AL as ASCII binary with length RCX to STDOUT
WriteBits:
     clc
     mov       rsi, bitBuffer
.repeat:   
     rcl       al, 1
     adc       BYTE[rsi], "0"
     mov       rdx, 1
     call      Write
     mov       BYTE[rsi], 0
     loop      .repeat
     ret