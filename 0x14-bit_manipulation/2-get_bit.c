#include "main.h"
/**
 * get_bit - returns the value of a bit at any index
 * @n: the number
 * @index: the index of the bit
 *
 * Return: value or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 0x01;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	size <<= index;
	if (size == 0)
		return (-1);

	if ((n >> index) & 1)
		return (1);

	else
		return (0);
}
