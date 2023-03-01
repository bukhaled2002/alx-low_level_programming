#include <stdio.h>
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
        while (src[j] != '\0')
        {
                j++;
        }
        int result[i + j];
        for (k = 0; k < i; k++)
        {
                result[k] = dest[k];
        }
        for (k = i; k < i + j; k++)
        {
                result[k] = src[k];
        }
        return (result);
}
