#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size dssd
 * @c: ds sd asing
 * Return: ssd dsds
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	int i;

	for (i = 0; i < size; i++)
	{
		(ptr + i) = c;
	}
	return (*ptr);
}
