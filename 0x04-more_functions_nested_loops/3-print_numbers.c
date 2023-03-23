#include "main.h"

/**
 * print_number - prints all numbers followed by a new line
 *
 **/
void print_number(void)
{
	int a;

	a = 0;

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
