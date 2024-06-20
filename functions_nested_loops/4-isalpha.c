#include "main.h"

/**
*_isalpha-print: a function that checks for alphabetic character
*@c: c >= 65 && c <= 90) || (c >= 97 && c <= 122
*Return: 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
