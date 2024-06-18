#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Printf " I sometimes suffer from insomnia
*
* Return: Always 0.
*
*/

int main(void)
{
char alph[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
	putchar(alph[i]);
}
putchar('\n');

return (0);
}
