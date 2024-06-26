#include "main.h"

/**
* puts2 - a function that prints every other character of a string,
* starting with the first character
* @str: char
*Return: 0
*/

void puts2(char *str)
{
	int i, size;

	size = 0;

	while (str[size] != '\0')
		size++;
	{
	for (i = 0; i < size; i++)
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		else
		continue;
	}
	_putchar('\n');
}
