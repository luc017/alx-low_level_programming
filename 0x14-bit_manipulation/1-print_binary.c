#include "main.h"
/**
 * print_binary - prints the binary representation of nbr
 * @n: the number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int d = 0;
	int size = sizeof(n) * (8 - 1);

	if (n == 0)
		_putchar('0');

	while (size >= 0)
	{
		if ((n >> size) & 1)
		{
			_putchar('1');
			d = 1;
		}
		else if (d)
			_putchar('0');

		size--;
	}
}
