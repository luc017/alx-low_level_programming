#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: the number of times the character is printed
 */
void print_diagonal(int n)
{
	int m, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (k = 0; k < n; k++)
			{
				if (m == k)
					_putchar('\\');
				else if (m < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
