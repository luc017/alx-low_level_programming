#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array
 * @nmeb: elements of the array
 * @size: size of the array
 * Return: a pointer to the memory
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *ptr;

	if (nmeb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmeb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}