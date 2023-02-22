#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - any description
 * Return: 1 (Success)
 */
void jack_bauer(void)
{
int i;
int j;

for (i = 0; i <= 23; i++)
{
	if (i < 10)
	{
		_putchar('0');
		_putchar(i + '0');
	}
	else
	{
		_putchar(i + '0');
	}
	_putchar(':');
	for (j = 0; j <= 59; j++)
	{
		if (j < 10)
		{
			_putchar('0');
			_putchar(j + '0');
		}
		else
		{
			_putchar(j + '0');
		}
		_putchar('\n');
}
}
}
