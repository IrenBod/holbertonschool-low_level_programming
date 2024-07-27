#include "main.h"

void more_numbers(void)
{
	int row;
	int column;

	for (row = 0; row <=14; row++)
		for (column = 0; column <= 10; column++)
		{
			_putchar(row);
			_putchar(column);
		}
	_putchar('\n');
}
