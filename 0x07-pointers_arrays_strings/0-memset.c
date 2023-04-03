#include "main.h"

/***
 * _memset - fills area memory block with constant byte
 * @s: pointer
 * @b: the value to be set
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d = 0;

	while (d < n)
	{
		s[d] = b;
		d++;
	}
	return (s);
}
