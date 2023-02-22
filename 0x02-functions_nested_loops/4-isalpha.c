#include "main.h"
#include <unistd.h>
/**
 * _isalpha - any description
 * @c: balssalsas adsa
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
