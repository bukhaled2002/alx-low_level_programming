#include "main.h"
#include <unistd.h>
/**
 * times_table - any description
 * Return: 1 (Success)
 */
void times_table(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		if (j != 0)
		{
			_putchar(',');
			if (j*i < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		if (j * i < 10)
			_putchar(j * i + '0');
		else 
		{
			_putchar(j * i / 10 + '0');
			_putchar(j * i % 10 + '0');
		}
		if (j == 9)
			_putchar('\n');
	}
}
}
