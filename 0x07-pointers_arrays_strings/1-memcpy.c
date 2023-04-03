#include "main.h"
/**
 * _memcpy - copies bytes from one memory area to another
 * @dest: pointer to a memory where bytes are copied from
 * @src: pointer to a memory where bytes are copied
 * @n: amount of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d = 0;

	while (d < n)
	{
		dest[d] = src[d];
		d++;
	}

	return (dest);
}
