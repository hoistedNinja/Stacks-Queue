# Mahesh Wosti
# CSIS 252
# MakeFile Prog5

CC=g++
OBJECTS=main.o token.o function.o print.o
EXE=prog5

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp function.cpp print.cpp
		$(CC) -c main.cpp
token.o:	token.cpp token.h
		$(CC) -c token.cpp
function.o:	function.cpp function.h
		$(CC) -c function.cpp
print.o:	print.cpp print.h
		$(CC) -c print.cpp
clean:		
		rm -rf *.o *~ $(EXE)


