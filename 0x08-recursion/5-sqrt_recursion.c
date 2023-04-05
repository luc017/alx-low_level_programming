#include "main.h"
/**
 * _sqrt - calculates the square root of n
 * @v: value to use while working out the square root
 * @rt: the root
 *
 * Return: square root
 */
int _sqrt(int v, int rt)
{
	if (v * v == rt)
		return (v);
	return (_sqrt(v + 1, rt));
}
/**
 * _sqrt_recursion - returns the square root
 * @n: integer to be operated on
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(1, n));
}
