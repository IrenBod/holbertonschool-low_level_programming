#include "main.h"

/**
* print_triangle -  a function that prints a triangle
* @size: int
*Return: 0
*/

void print_triangle(int size)
{
	int l, e, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

for (l = 1; l <= size; l++)
{
	for (e = size - 1; e < l; e--)
	{
		_putchar(' ');
	}

	for (h = 0; h < l; h++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
