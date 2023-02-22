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
	for (j = 0; j <= 59; j++)
	{
		_putchar(i < 9 ? 0 + '0' : i / 10 + '0');
		_putchar(i < 9 ? i + '0' : i % 10 + '0');
		_putchar(':');
		_putchar(j < 9 ? 0 + '0' : j / 10 + '0');
		_putchar(j < 9 ? j + '0' : j % 10 + '0');
		_putchar('\n');
}
}
}
