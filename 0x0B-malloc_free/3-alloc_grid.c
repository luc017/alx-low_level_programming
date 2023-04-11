#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates the mem. to the grid
 * @width: columns of the grid
 * @height: rows of the grid
 *
 * Return: the array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int  **ptr;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(ptr[b]);
			}
			free(ptr);
			return (NULL);
		}

		for (b = 0; b < a; b++)
		{
			ptr[a][b] = 0;
		}
	}

	return (ptr);

}
