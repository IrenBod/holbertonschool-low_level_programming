#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: char
*Return: 0
*/

void rev_string(char *s)

{
	int i, j, size, tmp;

	size = 10;
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
