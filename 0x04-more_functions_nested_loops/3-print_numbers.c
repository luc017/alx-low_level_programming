#include "main.h"

/**
 * print_number - prints all numbers followed by a new line
 *
 **/
void print_number(void)
{
	int a;

	a = 0;

	for (a = '0'; a < '10'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
