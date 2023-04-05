#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(length + (s + 1)));
}
