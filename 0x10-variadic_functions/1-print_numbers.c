#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: char that prints btn numbers
 * @n: number of args passes
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	va_list p;

	va_start(p, n);
	for (d = 0; d < n; d++)
	{
		if (d != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(p, int));
	}
	printf("\n");

	va_end(p);
}
