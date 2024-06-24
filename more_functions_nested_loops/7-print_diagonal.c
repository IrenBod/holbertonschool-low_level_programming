#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line on the terminal
* @n: int
*Return: 0
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}