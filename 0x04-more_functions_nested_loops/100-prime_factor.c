#include <stdio.h>
#include <math.h>
/**
 * main - assdadsadsasdasdads
 * Return: 0 success
 */
int main(void)
{
	long int i; long devider; long loop;

	i = 612852475143;
	if (i % 2 == 0)
		devider = i / 2;
	for (loop = 3; loop < i / 2; loop++)
	{
		if (i % loop == 0)
		{
			devider = i / loop;
			printf("%ld",devider);
			break;
		}
	}
	printf("\n");
return (0);
}
