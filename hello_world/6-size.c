#include<stdio.h>

/**
 * main - prints the size of various types
 *	on the computer it is compiled
 * Return: Always 0
*/

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongType;
	float floatType;

	printf("Size of a char: %u byte(s)\n", sizeof(charType));
	printf("Size of an int: %u byte(s)\n", sizeof(intType));
	printf("Size of a long int: %u byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %u byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %u byte(s)\n", sizeof(floatType));

	return (0);
}
