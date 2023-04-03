#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: pointer to a
 * @size: an integer
 */
void print_diagsums(int *a, int size)
{
	int in;
	int suma = 0;
	int sumb = 0;

	for (in = 0; in < size; in++)
	{
		suma += a[in];
		a += size;
	}

	a -= size;

	for (in = 0; ind < size; in++)
	{
		sumb += a[in];
		a -= size;
	}

	printf("%d, %d\n", suma, sumb);
}
