include(CheckCXXCompilerFlag)
if( CMAKE_MAJOR_VERSION>3 OR ( CMAKE_MAJOR_VERSION==3 AND CMAKE_MINOR_VERSION>=1))
	set(CMAKE_CXX_STANDARD 11)
else()
	check_cxx_compiler_flag("-std=c++11" COMPILER_SUPPORTS_CXX11)
	if(COMPILER_SUPPORTS_CXX11)
		add_definitions("-std=c++11")
	else()
		message( FATAL_ERROR "The compiler doesn't support -std=c++11 option. EDB requires a compiler which supports C++11. If you use gcc, please upgrade. For gcc-incompatible compiler please use cmake 3.1 or higher to get it to work." )
	endif()
endif()
