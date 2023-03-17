#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _calloc - allocates memory using malloc
 * @nmemb: number of bytes to allocate
 * @size: sds dsdsahdshds dsds dd s sddsdf jkdf
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return (s);
}
