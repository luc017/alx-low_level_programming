#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string
 * Return: str
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 'a' || str[i] != 'A'
				 || str[i] != 'e' || str[i] != 'E'
				 || str[i] != 'o' || str[i] != 'O'
				 || str[i] != 't' || str[i] != 'T'
				 || str[i] != 'l' || str[i] != 'L')
		{
			str[i] = str[i];
		}
		else
		{
			str[i] += (str[i] == 'a' || str[i] == 'A') * ('4' - 'a');
			str[i] += (str[i] == 'e' || str[i] == 'E') * ('4' - 'a');
			str[i] += (str[i] == 'o' || str[i] == 'O') * ('4' - 'a');
			str[i] += (str[i] == 't' || str[i] == 'T') * ('4' - 'a');
			str[i] += (str[i] == 'l' || str[i] == 'L') * ('4' - 'a');
		}
	}

	return (str);
}
