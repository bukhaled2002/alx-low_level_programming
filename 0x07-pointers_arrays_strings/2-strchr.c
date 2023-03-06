#include "main.h"
/**
 * _strchr - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired valu number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
		}
	}
	return (0);
}
