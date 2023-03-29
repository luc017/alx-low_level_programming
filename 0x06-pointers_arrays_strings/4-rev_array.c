#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: pointer variable
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tp;

	while (i < n / 2)
	{
		tp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tp;
		i++;
	}
}
