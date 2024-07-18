#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program that
 * performs basic arithmetic operations.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * The program expects exactly 4 arguments: the program name, two integers,
 * and an arithmetic operator (+, -, *, /, %). It validates the input, converts
 * the arguments to integers, and performs
 * the operation specified by the operator.
 * If the number of arguments is incorrect
 * or the operator is invalid, it prints an
 * error message and exits with a specific error code.
 *
 * Return: 0 on success.
 * Error codes:
 * 98 - Incorrect number of arguments.
 * 99 - Invalid operator.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
	strcmp(argv[2], "*") != 0 &&
	strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
