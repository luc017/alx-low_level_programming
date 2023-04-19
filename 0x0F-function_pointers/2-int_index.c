#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an int
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: pointer to the function that searches int
 *
 * Return: index, 0 when it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array == NULL || cmp == NULL)
		return (-1);

	else if (size <= 0)
		return (-1);

	else
	{
		for (d = 0; d < size; d++)
			cmp(array[d]);

		return (d);
	}
	if (d == size)
		return (-1);

	return (-1);
}
