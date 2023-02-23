#include "main.h"

/**
 * print_triangle - sadds akfasfas madsksa
 * @n: sjsdsajskld sadasajkadsjk nadsjndsa
 * Return: 1 Success 0 else
 */
void print_triangle(int n)
{
	int i, j;
if (n > 0)
{
for (j = 0; j < n; j++)
{
	for (i = n-1; i >= 0 ; i--)
{
	if (j >= i)
	_putchar('#');
	else
	_putchar(' ');
}
	_putchar('\n');
}
}
else
	_putchar('\n');

}
