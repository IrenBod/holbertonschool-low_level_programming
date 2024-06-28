#include "main.h"

/**
* _strncat -  a function that concatenates two strings
* @dest: char
* @src: char
* @n: int
*Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (n > 0 && *src != '\0')
	{
		*p++ = *src++;
		n--;
	}
	return (dest);
}
