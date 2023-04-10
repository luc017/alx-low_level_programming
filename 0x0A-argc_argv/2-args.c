#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguments
 * @argc: number of arguments
 * @argv: array containing arguments entered
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}

	return (0);
}
