#include "main.h"

/**
 * print_number - sadds akfasfas madsksa
 * @n: sjsdsaj assdkjdajk  adsjknadsjndsa
 * Return: 1 Success 0 else
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 1000000)
		_putchar((n / 1000000) % 100000 + '0');
	if (n > 100000)
		_putchar((n / 100000) % 10000 + '0');
	if (n > 10000)
		_putchar((n / 10000) % 1000 + '0');
	if (n > 1000)
		_putchar((n / 1000) % 100 + '0');
	if (n > 100)
		_putchar((n / 100) % 10 + '0');
	if (n > 10)
		_putchar((n / 10) % 10 + '0');
	_putchar(n % 10 + '0');
}
