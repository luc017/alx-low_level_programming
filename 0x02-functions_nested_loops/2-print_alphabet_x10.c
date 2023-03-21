#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet ten times
 */
void print_alphabet_x10(void)
{
	char ke;
	int i;

	i = 0;

	while (i < 10)
	{
		ke = 'a';

		while (ke <= 'z')
		{
			_putchar(ke);
			ke++;
		}
		_putchar('\n');
		i++;
	}
}
