#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings - prints given strings separated by a specified separator.
* @separator: the string to be printed between the strings.
* @n: the number of strings passed to the function.
*
* If separator is NULL, it does not print it.
* If one of the strings is NULL, it prints (nil) instead.
* A new line is printed at the end of the function.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(args);
}
