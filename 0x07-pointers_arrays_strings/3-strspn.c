#include "main.h"
/**
 * _strspn - counts how many consecutive
 * char are present in a specified substring
 * @s: pointer to the leading string
 * @accept: specified substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int d;
	unsigned int len = 0;
	int i;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[d] == accept[i])
			{
				len++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
	}

	return (len);
}
