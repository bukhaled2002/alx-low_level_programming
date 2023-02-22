#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - any description
 * @n: adafffasaafd
 * Return: 1 (Success)
 */
void print_to_98(int n)
{
int dif;
int i;

	if (n > 98)
		dif = -1;
	else
		dif = 1;

	for (i = n; i != 98; i += dif)
	{
		if (i != 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(i + '0');

}
