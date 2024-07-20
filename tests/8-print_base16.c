#include<stdio.h>

int main(void)
{
	int num;
	int lettre;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	{
		for (lettre = 'a'; lettre <= 'f'; lettre++)
		{
			putchar(lettre);
		}
	}
	putchar('\n');
	return (0);
}
