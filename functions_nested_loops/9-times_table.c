#include "main.h"

/**
*times_table - print the 9 times table
*@: void
* Return  0
*/

void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
		if (result <=9)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else 
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}

		if (column < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
