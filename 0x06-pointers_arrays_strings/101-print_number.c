#include "main.h"
/**
 * print_number - encode into 1337speak
 * @n: input value
 * Return: n value
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -1 * n;
		_putchar('-');
	}
	if (n1 / 10 != 0)
		print_numbers(n1 / 10);
	_putchar (n1 % 10 + '0');
}

