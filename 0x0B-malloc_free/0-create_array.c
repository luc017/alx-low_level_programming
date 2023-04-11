#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: the character to be inserted
 *
 * Return: pointer to the array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}

	free(ptr);

	return (ptr);
}
