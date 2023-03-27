#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: pointer to the string
 * @n: the integer
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", a[i]);

		i++;

		while (i < n)
		{
			printf(", %d", a[i]);
			i++;
		}
	}

	printf("\n");
}
