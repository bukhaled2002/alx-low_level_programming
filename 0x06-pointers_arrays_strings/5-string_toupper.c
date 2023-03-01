#include "main.h"
/**
 * string_toupper - concatenates two strings nput value
 * @n: input value
 *
 * Return: void
 */
char *string_toupper(char *n)
{
	int count = 0;
	char i = 'a';
	char j = 'A';
	while (n[count] != '\0')
	{
		if (n[count] >= 'a' & n[count] <= 'z')
		{
			n[count] = n[count] - (i - j);
		}
			count++;
	}
	return (n);
	
}
