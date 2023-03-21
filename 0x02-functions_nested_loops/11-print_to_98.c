#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing all the natural numbers
 * @n: the starting int
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n;  >= 98; j--)
		{
			if (b != 98)
				printf("%d, ", b)
			else if (b == 98)
				printf("%d\n", b);
		}
	}

}
