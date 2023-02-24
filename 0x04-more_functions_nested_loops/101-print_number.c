#include "main.h"

/**
 * print_number - sadds akfasfas madsksa
 * @n: sjsdsaj assdkjdajk  adsjknadsjndsa
 * Return: 1 Success 0 else
 */
void print_number(int n)
{
	int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;
	if (n1 > 1000000)
		_putchar((n1 / 1000000) % 10 + '0');
	if (n1 > 100000)
		_putchar((n1 / 100000) % 10 + '0');
	if (n1 > 10000)
		_putchar((n1 / 10000) % 10 + '0');
	if (n1 > 1000)
		_putchar((n1 / 1000) % 10 + '0');
	if (n1 > 100)
		_putchar((n1 / 100) % 10 + '0');
	if (n1 > 10)
		_putchar((n1 / 10) % 10 + '0');
	_putchar(n1 % 10 + '0');
}
