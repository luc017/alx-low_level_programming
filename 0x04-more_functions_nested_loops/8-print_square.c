#include "main.h"

/**
 * print_square - prints squares
 * @size: the character
 */
void print_square(int size)
{
	int k, e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
