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
		if (column > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (result < 10 && column > 0)
		{
			_putchar(' ');
		}
		if (result < 10)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		}
		_putchar('\n');
	}
}
