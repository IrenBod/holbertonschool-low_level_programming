#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14
* @:
*Return: 0
*/

void more_numbers(void)
{
	int i;
	int j;
	int u;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			u = j / 10;
			d = j % 10;
			{
				if (j >= 10)
			{
				_putchar('0' + u);
			}
			_putchar('0' + d);
			}
		}
		_putchar('\n');
	}
}
