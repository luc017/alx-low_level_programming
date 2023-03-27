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

	for (n--; n >= 0; n--; i++)
	{
		printf("d%", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	print("\n")
}
