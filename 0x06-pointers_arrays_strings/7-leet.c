#include "main.h"

/**
 * leet - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *leet(char *str)
{
	int i, j;

	i = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711"
		while (str[i] != '\0')
		{
			for (j = 0; j < 10; j++)
			{
				if (str[i] == s1[j])
					str[i] = s2[j];
			}
			i++;
		}
	return (str);
}
