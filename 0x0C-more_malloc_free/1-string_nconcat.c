#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1, len_s2, m;

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

	if (n >= len_s2)
		n = len_s2;

	ptr = malloc(sizeof(char) * (len_s1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (m = 0; m < (len_s1 + n); m++)
	{
		if (m < len_s1)
			ptr[m] = s1[m], s1++;
		else
			ptr[m] = *s2, s2++;
	}
	ptr[m] = '\0';

	return (ptr);
}
