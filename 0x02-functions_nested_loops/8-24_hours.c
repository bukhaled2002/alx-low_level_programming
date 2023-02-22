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
		_putchar(i);
	}
	else
	{
		_putchar(i);
	}
	_putchar(':');
	for (j = 0; j <= 59; j++)
	{
		if (j < 10)
		{
			_putchar('0');
			_putchar(j);
		}
		else
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
}
