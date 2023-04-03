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
	unsigned int d;
	int len = 0;
	char a;
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		a = accept[i];
		for (d = 0; s[d] != '\0'; d++)
		{
			if (s[d] == a)
			{
				len++;
			}
			else
			{
				return (len);
			}
		}
	}

	return (len);
}
