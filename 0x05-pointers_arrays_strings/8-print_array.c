#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int counter = 0;
	int i;

	while (*a != '\0')
	{
		a++;
		counter++;

	}
	a--;
	for (i = 0; i < counter; i++)
	{	if (i != counter-1)
		printf("%d, ",a[i]);
		else
			printf("%d\n",a[i]);

	}
}
