#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numd bers, followed by a new line.
 * @separator: The string to bed  printed between numbers.
 * @n: The number of integers pasd ads sed to the function.
 * @...: A variableds  number of numbers tsdsdo be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int ix;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
