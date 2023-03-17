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

	int i, size, k = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	s = malloc(size * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		s[k] = i;
		k++;
	}
	return (s);
}
