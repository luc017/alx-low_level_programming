#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the character to be located
 *
 * Return: pointer to the address c, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int d = 0;

	while (s[d] != '\0')
	{
		if (s[d] == c)
		{
			return (s + d);
		}
		d++;
	}

	return (NULL);
}
