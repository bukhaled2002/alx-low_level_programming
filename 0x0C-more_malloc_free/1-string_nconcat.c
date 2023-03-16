#include <stdlib.h>
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
	int i, j, sum;

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
	char *ptr = malloc(sizeof(int) * (j + n + 1));

	sum = j + n;
	if (!(ptr == NULL))
	{
		i = j = 0;
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (i != sum)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
