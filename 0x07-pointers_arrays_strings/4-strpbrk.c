#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: pointer to s, NULL otherwhise
 */

char *_strpbrk(char *s, char *accept)
{
	int d;
	int k;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[d] == accept[k])
				return (s + d);
		}
	}

	return (NULL);
}
