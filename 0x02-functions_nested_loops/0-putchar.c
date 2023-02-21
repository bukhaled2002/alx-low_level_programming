#include "main.h"
#include <unistd.h>
/**
 * _putchar - any description
 * @c: the char to do thing
 *
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
