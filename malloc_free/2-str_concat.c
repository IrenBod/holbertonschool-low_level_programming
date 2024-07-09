#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Write a function that concatenates two strings.
* @s1: char
* @s2: char
*Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	concat_str = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
