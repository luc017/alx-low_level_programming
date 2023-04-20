#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters
 * @n: a constant parameter
 *
 * Return: sum, 0 if it fails
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int d, s;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (d = n; d > 0; d = va_arg(p, int))
	{
		s = n + va_arg(p, int);
		return (s);
	}
	va_end(p);

	return (0);
}
