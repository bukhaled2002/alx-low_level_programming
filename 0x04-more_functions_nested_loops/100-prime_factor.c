#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
/**
 * main - assdadsadsasdasdads
 * Return: 0 success
 */
int main(void)
{
	long int i; long devider; bool f; long loop;

	i = 612852475143;
	f = true;
	devider = i;
	while (f)
	{
		devider--;
		if (i % devider == 0)
		{
			for (loop = 2; loop < i; loop++)
			{
				if (i % loop != 0)
				{
					printf("%ld",i);
					f = false;
				}
			}
		}

	}
	printf("\n");
return (0);
}
