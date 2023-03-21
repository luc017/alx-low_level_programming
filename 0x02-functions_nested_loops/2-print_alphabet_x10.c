#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet ten times
 */
void print_alphabet_x10(void)
{
	char ke = 'a';

	int i = 0;

	while (i < 10)
	{
		while (ke <= 'z')
		{
			_putchar(ke);
			ke++;
		}
		putchar('\n');
		i++
	}
}
