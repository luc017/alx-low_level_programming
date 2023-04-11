#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated mem, NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, len;
	int d;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	len = (len_s1 + len_s2) + 1;

	ptr = (char *)malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < len_s1; d++)
	{
		ptr[d] = s1[d];
	}
	for (d = 0; d < len_s2; d++)
	{
		ptr[len_s1 + d] = s2 [d];
	}
	ptr[len - 1] = '\0';

	return (ptr);
}
