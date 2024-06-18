#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Printf "Positive anything is better than negative nothing
*
* Return: Always 0.
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d", n, x);

	if (n > 5)
	{
		printf("and is greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("and is 0\n", n);
	}
	return (0);
}
