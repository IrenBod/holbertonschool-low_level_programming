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
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
