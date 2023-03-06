#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value
 * @dest: starting address of memory to be filled
 * @src: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n < 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
		return (dest);
}
