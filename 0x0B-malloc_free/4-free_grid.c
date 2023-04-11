#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the frid or integered
 * @grid: width
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int d;
	
	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);

}
