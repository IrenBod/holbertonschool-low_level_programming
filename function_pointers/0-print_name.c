#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_name - Calls a function to print a name
* @name: Pointer to the name to be printed
* @f: Pointer to a function that takes a char pointer as an argument
*     and returns void.
*
* This function checks if the name and function pointers are not NULL,
* and then calls the function pointed to by @f with the name as its argument.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
