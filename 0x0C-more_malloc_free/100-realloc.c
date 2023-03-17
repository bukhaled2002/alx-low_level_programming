#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _realloc - allocates memory using malloc
 * @ptr: number of bytes to allocate
 * @old_size: sds dsdsahdshds dsds dd s sddsdf jkdf
 * @new_size: sds sdd ds
 *
 * Return: a pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *old_ptr;
	unsigned int n;

	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	old_ptr = ptr;
	s = malloc(new_size);
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
		{
			s[n] = old_ptr[n];
		}
	}
	if (old_size > new_size)
	{
		for (n = 0; n < new_size; n++)
		{
			s[n] = old_ptr[n];
		}
	}
	free(ptr);
	return (s);
}
