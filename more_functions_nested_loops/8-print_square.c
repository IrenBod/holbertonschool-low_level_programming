#include "main.h"

/**
* print_square - a function that prints a square, followed by a new line
* @size: int
*Return: 0
*/

void print_square(int size)
{
	int column;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}

