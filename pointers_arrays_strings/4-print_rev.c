#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: char
*Return: 0
*/

void print_rev(char *s)
{
	int i, j, size;
	char tmp;
	size = 0;

	while
	(*(s + size) != '\0')
	{
		size++;
	}
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
