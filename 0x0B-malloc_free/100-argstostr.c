#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates args of the programs
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c;
	int len;
	int *length = &len;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			;
		*length += b;
	}
	*length += ac;

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
	}

	ptr[c] = '\0';

	return (0);
}
