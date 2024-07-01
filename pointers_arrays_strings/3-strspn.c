#include "main.h"

/**
* _isupper - Write a function that checks for uppercase character.
* @c: int
*Return: 0
*/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int count = 0;

	while (*s != '\0')
	{
	 char *a = accept;
	 int found = 0;
	 
	 while (*a != '\0')
	 {
		 if(*s == *a)
		 {
		 found = 1;
		 break;
		 }
		 a++;
	 }
	 if (!found)
	 {
		 break;
	 }
	 count++;
	 s++;
	}
	return  count;
}
