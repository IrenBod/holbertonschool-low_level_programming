#include<stdio.h>

/**
* main - The Fizz-Buzz tet an interview question
* @: int
* Return: 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	return (0);
}
