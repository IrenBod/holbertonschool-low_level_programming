#include "main.h"

/**
*2-print_alphabet_x10.c-print: a function that prints 10 times the alphabet
*Return: 0
*/

void print_alphabet_x10(void)
{
int x;
int i;
	for (x = 0; x < 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		
		_putchar('\n');
	
	}

}
