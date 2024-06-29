#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: char
* @src: char
* @n: int
*Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n > 0 && *src != '\0')
	{
		*p++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*p++ = '\0';
		n--;
	}
	return (dest);
}
