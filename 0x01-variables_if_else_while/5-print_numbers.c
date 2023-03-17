#include <stdio.h>

/**
 * main - prints digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
