#include<stdio.h>
/**
* main - "prints the size of various types
*	on the computer it is compiled
*
* Return: Always 0.
*/
int main(void)
{
	int intType;
	float floatType;
	long long  longlongType;
	char charType;
	long int longintType;

	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	

	return (0);
}
