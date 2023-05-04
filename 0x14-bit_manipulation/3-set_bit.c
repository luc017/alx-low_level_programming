#include "main.h"
/**
 * set_bit  - sets a given bit to 1
 * @n: the number
 * @index: the index of the byte
 *
 * Return: 1 success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	size <<= index;
	if (size == 0)
		return (-1);

	if (n | (1 << index))
		return (1);
}
