#include "main.h"
/**
 * cap_string - capitalises the first letter of each word
 * @str: pointer to a string
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t'
				 || str[i - 1] == '\n' || str[i - 1] == ','
				 || str[i - 1] == ';' || str[i - 1] == '.'
				 || str[i - 1] == '!' || str[i - 1] == '?'
				 || str[i - 1] == '"' || str[i - 1] == '('
				 || str[i - 1] == ')' || str[i - 1] == '{'
				 || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
