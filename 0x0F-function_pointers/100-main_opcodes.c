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
	int n, d = 0;

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

	n = atoi(argv[1]);
	f = (unsigned char *)&main;
	if (n > 0)
	{
		for (; d < (n - 1); d++)
			printf("%02hhx", f[d]);
		printf("%hhx\n", f[d]);
	}
	return (0);
}
