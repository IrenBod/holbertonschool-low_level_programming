#include "main.h"

/**
* _puts_recursion - a function that prints a string, followed by a new line.
* @s: char
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
