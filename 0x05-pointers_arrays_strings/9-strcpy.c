#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int counter = 0;

	while (*(src + counter) != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
	dest[i] = src[i];
	}
	dest[counter] = '\0';
	return (dest);
}
