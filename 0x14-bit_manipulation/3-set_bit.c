#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * set_bit - converts a binary number to unsigned int
 * @n: string containing the binary number
 * @index: ddsds ds ds ds
 *
 * Return: the converted number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
