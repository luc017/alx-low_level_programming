#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: number to be operated on
 *
 * Return: factorial of number, -1 is n is < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
