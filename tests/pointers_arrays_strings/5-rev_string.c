#include "main.h"

void rev_string(char *s)
{
	int size = 0;
	int i;
	int j;
	char tmp;

	while (s[size] != '\0')
	{
		size++;
	}
	j = 0;
	i = size - 1;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
