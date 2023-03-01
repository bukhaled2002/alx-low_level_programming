#include "main.h"
/**
 * cap_string - concatenates two strings nput value
 * @n: input value
 *
 * Return: void
 */
char *cap_string(char *n)
{
	int sepC;
	char sep[] = {",",";",".","!","\"","?","(",")","{","}"};
	int count = 0;
	char i = 'a';
	char j = 'A';
	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z')
		{
			n[count] = n[count] - (i - j);
		}
		for (sepC = 0; sepC < 10; sepC++)
		{
			if (n[count] == sep[sepC])
				n[count] = '\n';
		}
			count++;
	}
	return (n);
	
}
