#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies a string in a newly allocated mem.
 * @str: string to be copied
 *
 * Return: pointer to the new memory, NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return (ptr);
}
