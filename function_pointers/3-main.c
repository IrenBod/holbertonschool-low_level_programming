#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error1\n");
			exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
	strcmp(argv[2], "*") != 0 &&
	strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error2\n");
		exit(99);
	}
	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
