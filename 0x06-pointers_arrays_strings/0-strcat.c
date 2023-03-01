#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i = 0;
	int j = 0;
	int k;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')	
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
