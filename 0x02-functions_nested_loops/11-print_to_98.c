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
int k;

	if (n > 98)
		dif = -1;
	else
		dif = 1;

	for (i = n; i != 98; i += dif)
	{
		if (i != 98)
		{
			if(i < 0)
			{
				k = i * -1;
				_putchar('-');
			}
			else
				k = i;
		if (k > 100)
		{
			_putchar(k / 100 + '0');
			_putchar((k / 10) % 10 + '0');
			_putchar(k % 10 + '0');
		}
		else if (k < 100 && k > 10)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		else 
			_putchar(k + '0');
}}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
