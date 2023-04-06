#include "main.h"
/**
 * _strcmp - compares two strings using their ASCII values
 * @s1: pointer to the string
 * @s2: pointer to the string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			n = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (n);
}
