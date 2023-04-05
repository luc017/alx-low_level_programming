#include "main.h"
/**
 * divisible - calculates if num is divisible
 * @num: value to be operated on
 * @d: division
 *
 * Return: 1 if divisible, 0 otherwise
 */
int divisible(int num, int d)
{
	if (num % d == 0)
		return (0);
	if (d == num / 2)
		return (1);
	return (divisible(num, div + 1));
}
/**
 * is_prime_number - finds if it is prime number
 * @n: integer
 *
 * Return: 1 if it is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (divisible(n, d));
}
