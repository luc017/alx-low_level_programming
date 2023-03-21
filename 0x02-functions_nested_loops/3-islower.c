#include "main.h"
/**
 * islower - checking for lowercase
 * @c: the character to check
 * Return: 1 in case it is lower case, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
