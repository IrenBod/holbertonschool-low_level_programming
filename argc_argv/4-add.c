#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main -  a program that adds positive numbers.
* @argc: int
* @argv: char
*Return: 0
*/

int main(int argc, char *argv[])

{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 9))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
