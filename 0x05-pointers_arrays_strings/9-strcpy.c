#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
