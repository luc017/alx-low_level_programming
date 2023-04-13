#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: the size of the last memo
 * @new_size: the new size
 *
 * Return: pointer to the new memo
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *new_ptr;
	unsigned int b;

	new_ptr = ptr;
	if (new_size > old_size)
		old_size = new_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size);

	for (b = 0; b < old_size; b++)
	{
		p[b] = new_ptr[b];
	}

	free(ptr);
	return (p);
}
