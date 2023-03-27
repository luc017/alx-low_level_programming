#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer to the string
 * Return: i (success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
