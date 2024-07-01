#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @n: unsigned int
* @dest: char
* @src: char
*Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
