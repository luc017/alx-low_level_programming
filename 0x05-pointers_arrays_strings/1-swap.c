#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
