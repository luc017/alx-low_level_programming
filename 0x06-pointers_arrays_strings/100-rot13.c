#include "main.h"
/**
 * rot13 - encoding a string using rot13
 * @c: pointer to a string
 * Return: ce
 */
char *rot13(char *c)
{
	char *ce = c;
	int i;

	while (*c != '\0')
	{
		if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
		{
			*c = *c + 13;
		}
		else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
		{
			*c = *c - 13;
		}
		c++;
	}

	return (ce);
}
