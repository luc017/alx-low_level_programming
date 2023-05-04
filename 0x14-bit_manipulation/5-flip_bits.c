#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int counter = 0;

	value = n ^ m;
	for (; value != 0; value >>= 1)
	{
		if (1 & value)
			counter++;
	}
	return (counter);
}
