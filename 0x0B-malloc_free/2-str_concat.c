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
	int i;
	char *ptr;


	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	len = len_s1 + len_s2 + 1;

	ptr = (char *)malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s2; i++)
	{
		s1[len_s1 + i] = s2[i];
		ptr[i] = s1[len_s1 + i];
	}
	ptr[i] = '\0';

	return (ptr);
}
