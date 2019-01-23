CC = gcc
CFLAGS = -lfl

bison -d -v Parser.y
flex -o Scan.c Scanner.l
gcc -o Scan Parser.tab.c Scan.c -lfl