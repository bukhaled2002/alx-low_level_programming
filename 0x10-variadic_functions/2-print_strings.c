#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints numsd bers, followed by a new line.
 * @separator: The string to bed  printed between numbers.
 * @n: The number of integers pasd ads sed to the function.
 * @...: A variableds  strings of numbers tsdsdo be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;
	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string,char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s",str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
