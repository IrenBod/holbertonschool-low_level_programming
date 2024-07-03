#include "main.h"
#include<stdio.h>

/**
* whatsmyname - a program that prints its name, followed by a new line
* @argv: char
*Return: 0
*/

int  main(int argc, char *argv[])

{	
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
