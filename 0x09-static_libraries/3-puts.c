#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
