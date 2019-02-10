//Header file for containing stuff to generate code of minilang to C

#include"symbol_table.h"


//This is an important function to resolve the scope issue (like var a : int = a is not same as int a = a in C)
int find(Exp *exp, char *literal);

//Function that is calleed from the parser file. Opens a new file with .c and starts creating C code 
void code_gen(Statements *AST, char *filename); 

//Prints expressiuions in Minilang into C format 
void create_C_exp(Exp *exp, FILE *fp, int tag);

//Prints all Minilang code into C code (uses the above function to print expressions)
void create_C_code(Statements *AST, FILE *fp);