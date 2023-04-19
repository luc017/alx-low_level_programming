#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned char *f;
	int d = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = (unsigned char *)&main;
	if (atoi(argv[1]) > 0)
	{
		for (; d < (atoi(argv[1]) - 1); d++)
			printf("%02hhx", f[d]);
		printf("%hhx\n", f[d]);
	}
	return (0);
}
