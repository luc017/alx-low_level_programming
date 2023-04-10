#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun number of coins for a change
 * @argc: number of arguments
 * @argv: pointer to the array with arguments
 *
 * Return: 0 always, 1 otherwise
 */
int main (int argc, char **argv)
{
	int cents;
	int c = 0;
	int i = 0;
	int c_value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		c += cents / c_value[i];
		cents = cents % c_value[i];
	}

	printf("%d\n", c);

	return (0);
}
