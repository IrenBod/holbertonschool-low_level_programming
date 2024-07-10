#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Write a function that concatenates two strings.
* @s1: char
* @s2: char
* @n: unsigned int
*Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newline;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (n >= l2)
	{
		n = l2;
	}
	newline = (char *)malloc(sizeof(char) * (l1 + n + 1));
		if (newline == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < l1; i++)
	{
		newline[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newline[i + j] = s2[j];
	}
	newline[i + j] = '\0';
	return (newline);
}
