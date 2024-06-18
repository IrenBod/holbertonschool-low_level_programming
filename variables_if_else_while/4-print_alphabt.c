#include <stdio.h>

/**
 * main - print 4. When I was having that alphabet soup
*/

int main(void)

{

	int i;

	for (i = 97; i <= 122; i++)
	{
	if (i == 101 || i == 113)
	{
		continue;
	}

	putchar(i);
	}

	putchar('\n');

	return (0);
}
