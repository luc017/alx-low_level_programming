#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
