#include "main.h"

/**
 * more_numbers - sadds akfasfas madsksa
 * Return: 1 Success
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 14; i++)
	{
		_putchar(i < 10 ? i + '0' : i / 10 + '0');
		if (i > 10)
			_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
