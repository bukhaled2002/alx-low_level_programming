#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - any description
 * @n: balssalsas adsa
 * Return: 1 (Success)
 */
int print_last_digit(int n)
{
int i = n % 10;

_putchar(i + '0');
return (i);
}
