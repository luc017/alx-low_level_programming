#include "main.h"
/**
 * _strlen - uses recursion to find the length
 * @s: pointer to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}
/**
 * help_palindrome - checks if a string is a palindrom
 * @s: pointer to the strin
 * @a: starting index
 * @z: ending index
 *
 * Return: 1 if is a palindrome, 0 otherwise
 */
int help_palindrome(char *s, int a, int z)
{
	if (a >= z)
		return (1);

	if (s[a] != s[z])
		return (0);

	return (help_palindrome(s, a + 1, z - 1));
}
/**
 * is_palindrome - checks if a string is s is a palindrome
 * @s: pointer to the string
 *
 * Return: 1 if is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length <= 1)
		return (1);

	return (help_palindrome(s, 0, length - 1));

}
