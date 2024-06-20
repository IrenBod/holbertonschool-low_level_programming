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

_putchar(res + '48');
return (res);
}
