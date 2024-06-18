#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Printf " a program that prints the alphabet * 2
*
* Return: 0.
*/

int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
