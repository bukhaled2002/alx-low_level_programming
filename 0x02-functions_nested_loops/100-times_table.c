#include "main.h"
#include <unistd.h>
/**
 * print_times_table - any description
 * @n: adafffasaafd
 * Return: 1 (Success)
 */
void print_times_table(int n)
{
int i;
int j;
int product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j > 0 && j < n)
				{
				_putchar(product < 100 ? ' ' : product / 100 + '0');
				_putchar(product < 10 ? ' ' : (product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
				_putchar(',');
				}
				else if (j == 0)
					_putchar(product + 0);
				else if (j == n)
					_putchar('\n');
				
			}
		}
	}
}
