#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - any description
 * @n: adafffasaafd
 * Return: 1 (Success)
 */
void print_to_98(int n)
{
int dif
	if (n > 98)
		dif = -1;
	else
		dif = 1;

while (n != 98)
{
	int i;

	for (i = n; i != 98; i += dif)
	{
		if (i != 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(i)
		}
	}
}
}
