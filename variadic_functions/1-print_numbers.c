#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_numbers - prints given numbers separated by a specified string.
* @separator: the string to be printed between numbers.
* @n: the number of integers passed to the function.*
* If separator is NULL, it does not print it.
* A new line is printed at the end of the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{printf("%s", separator);
		}
	}

	printf(\n);
	va_end(args);
}
