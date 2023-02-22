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
	for (j= 0; j <= 59; j++)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i);
		}
		else
			_putchar(i);
		if (j < 10)
		{
			_putchar('0');
			_putchar(j + '0');
		}
		else
			_putchar(j + '0');
		_putchar('\n');
}
}
}
