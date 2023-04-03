#include "main.h"

/***
 * _memeset - sets value to a specific memory block
 * @s: pointer
 * @b: the value to be set
 * @n: number of bytes
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
	return (s)
}
