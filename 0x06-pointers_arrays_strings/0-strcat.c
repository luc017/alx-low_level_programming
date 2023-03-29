#include "main.h"

/**
 *_strcat - appends strings
 * @dest: pointer
 * @src: this is also a pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
		int i = 0;

		while (src[i] != '0')
		{
			dest[dest_len + i] = src[i]
			i++;
		}

		dest[dest_len + i] = '\0'
	}

	return (dest);
}
