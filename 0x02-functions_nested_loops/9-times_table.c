#include "main.h"
/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int a, b, k;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			k = a * b;
			if (b == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
