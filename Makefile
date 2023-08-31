# file: lecture_09/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# Quick replace with the "M-%" command. Use y or n to choose what to replace. Make SURE TO SELECT A REGION
#

# define a target for the application
#
all: p01.exe

# define a target to link the application
#
p01.exe: p01.o function.o 
	g++ -g -lm p01.o function.o -o p01.exe

# define targets to compile the source code
#
p01.o: p01.cc p01.h Makefile
	g++ -g -c p01.cc -o p01.o

function.o: function.cc p01.h Makefile
	g++ -g -c function.cc -o function.o

# define a target to clean the directory
#
clean:
	rm -f p01.o p01.exe function.o

#
# end of file


