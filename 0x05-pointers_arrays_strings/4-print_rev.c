#include "main.h"
/**
 * print_rev - returns the length of a string
 * @s: string
 */
void print_rev(char *s)
{	int count,o;


	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (o = count; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
