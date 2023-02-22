#include "main.h"
#include <unistd.h>
/**
 * _islower - any description
 * @c: balssalsas adsa
 * Return: 1 (Success)
 */
int _islower(int c)
{
char i = c + '0';

if (c >= 'a' || c <= 'z')
	return (1);
else
	return (0);
}
