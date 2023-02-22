#include "main.h"
#include <unistd.h>
/**
 * _islower - any description
 * @c: balssalsas adsa
 * Return: 1 (Success)
 * Return: 0 (Fail)
 */
int _islower(int c)
{
char i = c + '0';

if (i >= 'a' || i<= 'z'){
return (1);
}
else
{
	return (0);
}
}
