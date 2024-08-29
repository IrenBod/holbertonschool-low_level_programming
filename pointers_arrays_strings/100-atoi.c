#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: This function takes a string `s` and converts
 * it to an integer, taking into account any leading `+` or `-`
 * signs. The function processes each character in the string
 * until it reaches a non-numeric character after the number starts.
 * If no digits are found in the string, the function returns 0.
 *
 * Return: The converted integer, which may be positive or negative
 * depending on the presence of '-' or '+' signs in the string.
 * If no digits are found, the function returns 0.
 */


int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
		{
		break;
		}
		i++;
	}

	if (!found_digit)
	{
		return (0);
	}

	return (sign * result);
}

