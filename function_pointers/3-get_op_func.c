#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function
 *  to perform the operation requested by the user.
 * @s: The operator passed as argument.
 *
 * This function iterates over an array of structures where each structure
 * contains a string representing an operator and a corresponding function.
 * If the operator matches one of the strings,
 * the corresponding function is returned.
 * If no match is found, the function returns NULL.
 *
 * Return: A pointer to the function corresponding to the operator,
 * or NULL if no match is found.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (*ops[i].op != '\0')
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
