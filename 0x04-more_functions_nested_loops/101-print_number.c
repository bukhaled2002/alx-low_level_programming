#include "main.h"

/**
 * print_number - sadds akfasfas madsksa
 * @n: sjsdsaj assdkjdajk  adsjknadsjndsa
 * Return: 1 Success 0 else
 */
int print_number(int n)
{
	if (n > 100)
		_putchar(n / 100 + '0');
	if (n > 10)
		_putchar((n / 10) % 10 + '0');
	_putchar(n % 10);
}
