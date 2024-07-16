#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - calculates the sum of all given arguments.
* @n: the number of arguments.
* Return: int sum
* This function takes a variable number of integer arguments
* and returns their sum. If the number of arguments is zero,
* the function returns 0.
* Example usage:
* int sum = sum_them_all(3, 10, 20, 30); // sum will be 60
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list factor;

	va_start(factor, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		result += va_arg(factor, int);
	}
	va_end(factor);
	return (result);
}
