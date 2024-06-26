#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: char
*Return: 0
*/

void puts_half(char *str)

{
	int i;
	int start;
	int size;

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		start = size / 2;
	}
	else
	{
		start = (size - 1) / 2;
	}
	for (i = start; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
