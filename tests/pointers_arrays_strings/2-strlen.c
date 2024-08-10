#include "main.h"

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
