#include "main.h"

/**
 * print_number - prints all digits followed by a new line
 *
 **/
void print_number(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');
}
