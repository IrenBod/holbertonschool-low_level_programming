#include "main.h"

/**
*print_last_digit - a function that prints the last digit of a number
*@a: int
*Return: 0
*/

int print_last_digit(int a)
{
int b;
int res;
b = 10;
res = a % b;

if (res < 0)
{
	res = -res;
}

_putchar(res + '0');
return (res);
}
