#include "main.h"

/**
*times_table - print the 9 times table
*@: void
* Return  0
*/

void times_table(void)
{
	int l, c, m;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			m = l * c;
	if (m < 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + m);
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
	}
	
		}
		_putchar('\n');
	}
}
