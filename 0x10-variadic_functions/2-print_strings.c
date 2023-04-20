#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int d;
	char *value;

	va_start(p, n);
	for (d = 0; d < n; d++)
	{
		if (d != 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		value = va_arg(p, char *);
		if (value == NULL)
			printf("(nil)");

		printf("%s", va_arg(p, char *));
	}
	printf("\n");

	va_end(p);
}
