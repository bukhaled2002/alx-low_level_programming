#include <stdio.h>
/**
 * reverse_array - concatenates two strings
 * @a: input value
 * @n: input value
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
