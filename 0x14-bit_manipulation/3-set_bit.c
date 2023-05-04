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
	unsigned long int size = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (size << index);
	return (1);
}
