#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: int  to extract the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;

	-putchar(a + '0');

	return (a);
}
