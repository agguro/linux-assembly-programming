#! /bin/sh
touch AUTHORS NEWS README ChangeLog
aclocal
automake --add-missing --foreign --copy
autoconf
./configure --prefix $PWD/../../../build/network/
make
make install