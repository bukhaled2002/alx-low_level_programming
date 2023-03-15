#include <stdio.h>
#include <stdlib.h>

/**
 * main -> a program that adds positive numbers.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i]) >= 0))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
