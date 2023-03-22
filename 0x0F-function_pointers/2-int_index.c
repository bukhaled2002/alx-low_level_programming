#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - prints each array elem on a newl
* @array: array
* @size: how many elem to print
* @cmp: pointer to prind  sd ds
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
