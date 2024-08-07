#include "main.h"

/**
* _strstr - a function that locates a substring.
* @haystack: char
* @needle: char
*Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	for (; *haystack != '\0'; haystack++)
	{

	char *h = haystack;
	char *n = needle;
		while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	}
		return ('\0');
}
