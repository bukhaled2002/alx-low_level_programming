#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * array_range - allocates memory using malloc
 * @min: number of bytes to allocate
 * @max: sds dsdsahdshds dsds dd s sddsdf jkdf
 *
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *s;

	int i;

	int size = max - min + 1;

	if (min > max)
		return (NULL);
	s = malloc(size * sizeof(int));
	for (i = 0; min <= max; i++)
	{
		s[0] = min++;
	}
	return (s);
}
