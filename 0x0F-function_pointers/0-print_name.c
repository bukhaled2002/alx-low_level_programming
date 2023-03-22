#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - pr int ssd name using pointer to function
* @name: string to sc add
* @f: pointer to functio s sssdn
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
