#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/*
* File: function_pointers.h
* AUth: Dike Chika
* Desc: Header file containing prototypes for all functions
*       used in the 0x0E-function_pointers directory.
*/



#include <stdlib.h>


int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
