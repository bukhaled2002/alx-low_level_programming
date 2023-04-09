#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - converts a binary number to unsigned int
 * @n: string containing the binary number
 * @index: sdd sds d sd
 *
 * Return: the converted number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
