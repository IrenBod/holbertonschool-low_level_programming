#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
	}
	else
		for (i = n; i >= 98; i--)
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
	printf("\n");
}
