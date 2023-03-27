#include "main.h"
/**
 * puts2  - prints every character of a string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}
