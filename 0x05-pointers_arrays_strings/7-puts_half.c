#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: pointer ot the string
 */
void puts_half(char *str)
{
	int i, half, n, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		half = len / 2;

		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (len - 1) / 2;

		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
