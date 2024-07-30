#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *      The string should only contain '0' and '1' characters.
 * Return: The converted unsigned int value, or 0 if input is invalid.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	int i;

	if (b == 0)
	{
		return (0);
	}

	result = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
