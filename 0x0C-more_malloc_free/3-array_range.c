#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the smallest int
 * @max: the largest int
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int b, len;

	if (min > max)
		return (NULL);

	len = max - min;

	ptr = malloc((len + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; b <= max; b++)
		ptr[b] = min++;

	return (ptr);
}
