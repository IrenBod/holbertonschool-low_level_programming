#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: char
*Return: 0
*/

void print_rev(char *s)
{
	int size = 0, j;

	while (s[size] != '\0')
	{
		size++;
	}
	for (j = size - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
