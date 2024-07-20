#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 97;
	char ch = 'A';

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i++;
	}

	while (ch >= 'A' && ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return 0;
}
