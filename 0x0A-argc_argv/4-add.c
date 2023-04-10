#include <stdio.h>
#include <stdlib.h>

int valid_int(char *str);
/**
 * main - adding positive integers together
 * @argc: number of integers
 * @argv: arguments
 *
 * Return: 0 (success), 1 otherwise
 */
int main(int argc, char **argv)
{
	int d, sum = 0;

	if (argc > 1)
	{
		for (d = 1; d < argc; d++)
		{
			if (valid_int(argv[d]))
			{
				sum += atoi(argv[d]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}

	return (0);
}

/**
 * valid_int - checks  it the arg is an int
 * @str: pointer
 *
 * Return: 1 valid int, 0 otherwise
 */
int valid_int(char *str)
{
	while (str[0])
	{
		if (str[0] < '0' || str[0] > '9')
			return (0);
		str++;
	}

	return (1);
}
