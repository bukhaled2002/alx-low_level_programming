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
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (i = 0; n < 0; i++)
	{
		char_dest[i] = char_src[i]
	}
		return (char_dest);
}
