#!/bin/bash

# Build the compiler
#
# You MUST replace the following commands with the commands for building your compiler

#make clean -C ./src
#make -C ./src

cd src
bison -d -v Parser.y
flex -o Scan.c Scanner_Update.l
gcc Parser.tab.c Scan.c -o minic -lfl
