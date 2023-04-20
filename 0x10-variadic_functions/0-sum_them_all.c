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
	unsigned int d, s = 0;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (d = 0; d < n; d++)
		s += va_arg(p, int);

	va_end(p);

	return (s);
}
