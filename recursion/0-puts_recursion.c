#include "main.h"

/**
* _isupper - Write a function that checks for uppercase character.
* @c: int
*Return: 0
*/

void _puts_recursion(char *s)

{
	
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	if (*s != '\0')
	{
	_puts_recursion(s);
	}
	_putchar('\n');
}
