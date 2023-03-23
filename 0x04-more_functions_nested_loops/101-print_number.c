#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)/*checking if the absolute value of n divide by ten is positive*/
	{
		print_number(n1 / 10);/*recursive call to print the integer*/
	}

	_putchar((n1 % 10) + '0');/* least significant integer plus the ASCII of 0*/
}
