#include "main.h"

void more_numbers(void)
{
	int row;
	int column;

	for (row = 0; row <=10; row++)
	{
		for (column = 0; column < 15; column++)
		{
			if (column > 9)
			{
			_putchar('0' + column / 10);
			_putchar('0' + column % 10);
			}
			else
			{
				_putchar('0' + column);
			}
		}
		_putchar('\n');
	}
}
