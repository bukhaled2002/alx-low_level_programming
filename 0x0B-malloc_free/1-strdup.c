#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create array of size size and assign char c
 * @str: size dssc s adsc
 * Return: ssd dsds
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}
