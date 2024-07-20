#include "main.h"

int print_last_digit(int a)
{
	int res;

	res = a % 10;

	if (res < 0)
	{
		res = -res;
	}
	_putchar(res +'0');
	return (res);
}
