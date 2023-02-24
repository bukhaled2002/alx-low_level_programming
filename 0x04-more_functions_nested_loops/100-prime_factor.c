#include <stdio.h>
#include <math.h>
/**
 * main - assdadsadsasdasdads
 * Return: 0 success
 */
int main(void)
{
	long int i;
	long int devider;
	long int loop;
	long int loop2;
	i = 612852475143;
	if (i % 2 == 0)
		devider = i / 2;
	for (loop = 3; loop < i / 2; loop++)
	{
		if (i % loop == 0)
		{
			devider = i / loop;
				for (loop2 = 2; loop2 < devider; loop2++)
				{
					if (devider % loop2 != 0)
					{
					printf("%ld", devider);
					break;
					}
					else
						continue;
				}
		}
	}
	printf("\n");
return (0);
}
