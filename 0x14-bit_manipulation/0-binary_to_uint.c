#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * _pow - sdds ds s
 * @n: saas as
 * @power: dsd sd
 * Return: nud dsd
 */
unsigned int _pow(int n, int power)
{
	int i;
	unsigned int result = 1;

	for (i = 0; i < power; i++)
	{
		result *= n;
	}
	return (result);
}
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, hold, poww = 0;
	unsigned int result = 0;

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if ((b[i] != '1') & (b[i] != '0'))
			return (0);
		hold = (int)b[i] - 48;
		result += hold * _pow(2, poww);
		poww++;
	}
	return (result);
}
