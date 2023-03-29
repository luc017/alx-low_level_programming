#include "main.h"
/**
 * _strncpy - copies a string up to n characters
 * @dest: pointer to the string
 * @src: pointer to the string
 * @n: the amount of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
