#include "main.h"
#include <stdio.h>

/**
* print_array - a function that prints n elements of an array of integers
* @a: int
* @n: int
*Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			if (i ==  n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
		}
	} else
	{
	printf("\n");
	}
}
