#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - any description
 * @n: adafffasaafd
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
			if (i < 100)
			{
			if (i < 10)
			_putchar(i + '0');
			else
			{
				if (i < 0)
				{
					_putchar('-');
					_putchar(-1 * i / 10 + '0');
       					_putchar(-1 * i % 10 + '0');
				}
				else
				{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			}
			}
			else
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
