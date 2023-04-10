#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: 0 (success), 1 otherwise
 */
int main(int argc, char **argv)
{
	int d;

	if (argc == 3)
	{
		d = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", d);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
