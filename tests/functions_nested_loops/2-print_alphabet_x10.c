#include "main.h"

void print_alphabet_x10(void)
{
	int row;
	int column;

	for (row = 0; row < 10; row++)
	{
		for (column = 'a'; column <= 'z'; column++)
		{
			_putchar(column);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
