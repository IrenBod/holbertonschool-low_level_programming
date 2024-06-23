#include "main.h"

/**
*times_table - print the 9 times table
*@: void
* Return  0
*/

void times_table(void)
{
	int l, c, m;

	for (l = 0; <= 9 ; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			m = l * c;
	if (m <= 9)
	{
		_putchar('0' + m);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar(',');
		_putchar(' ');
	}
	
		}
		_putchar('\n');
	}
}
