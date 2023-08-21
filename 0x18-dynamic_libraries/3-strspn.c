#include "main.h"
/**
 * _strspn - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @accept: the desired valu number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}


