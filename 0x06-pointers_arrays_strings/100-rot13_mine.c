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
	char key[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char value[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D',
		 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (*c)
	{
		for (i = 0; i < 26; i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = value[i];
			}
		}
		c++;
	}

	return (ce);
}
