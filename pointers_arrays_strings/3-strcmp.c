#include "main.h"

/**
* _strcmp - a function that compares two strings
* @s1: char
* @s2: char
*Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	if (*s1 == '\0' && *s2 == '\0')
	return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
