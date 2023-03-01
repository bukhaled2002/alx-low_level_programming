#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: n value
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' & j <= n)	
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j > n)
	{
		dest[i] = '\0';
		j++;
		i++;
	}
	return (dest);
}
