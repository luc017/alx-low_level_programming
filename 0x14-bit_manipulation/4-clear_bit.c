#include "main.h"
/**
 * clear_bit - clears the bit to 0
 * @n: the number
 * @index: the index of the bit to be cleared
 *
 * Return: 1 if it works, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(size << index);
	return (1);
}
