#include "main.h"

/**
* cap_string - a function that capitalizes all words of a string.
* @str: char
*Return: 0
*/

char *cap_string(char *str)
{	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
			|| str[i] == ';' || str[i] == '.' || str[i] == '!'
			|| str[i] == '?' || str[i] == '"' || str[i] == '('
			|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}