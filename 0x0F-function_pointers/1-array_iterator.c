#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a certain func
 * @array: the array given as a parameter
 * @size: size of the array
 * @action: pointer to the function that must be done
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;

	for (d = 0; d <= size; d++)
		action(array[d]);
}
