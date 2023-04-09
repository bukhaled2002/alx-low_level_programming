#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * flip_bits - converts a binary number to unsigned int
 * @n: string containing the binary number
 * @m: ds ssd dsdsds sd
 *
 * Return: the converted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exc = n ^ m;
	
	for (i = 63; i >= 0; i--)
	{
		if ((exc >> i) & 1)
			count++;
	}
	return count;
}
