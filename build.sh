#!/bin/bash

cd src
bison -d -v Parser.y
flex -o Scan.c Scanner_Update.l
gcc Parser.tab.c Scan.c -o minic -lfl
