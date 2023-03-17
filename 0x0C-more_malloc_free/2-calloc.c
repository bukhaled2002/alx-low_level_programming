#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * string_nconcat - allocates memory using malloc
 * @s1: number of bytes to allocate
 * @s2: sds dsdsahdshds dsds
 * @n: sdd s sddsdf jkdf
 *
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum;
	char *s;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[i])
		i++;
	while (s1[j])
		j++;
	if (n > i)
		n = i;
	s = malloc(sizeof(char) * (j + n + 1));

	sum = j + n;
	if (!(s == NULL))
	{
		i = j = 0;
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		while (i != sum)
		{
			s[i] = s2[j];
			i++;
			j++;
		}
		s[i] = '\0';
	}
	return (s);
}
