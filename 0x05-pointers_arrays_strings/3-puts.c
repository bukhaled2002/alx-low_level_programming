#include "main.h"
/**
 * _puts - returns the length of a string
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%p",*str);
		str++;
	}
	printf("\n");
}
