#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments entered'
 * @argv: variables entered
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int d;

	d = argc - 1;

	printf("%d\n", d);

	(void)argv;

	return (0);
}
