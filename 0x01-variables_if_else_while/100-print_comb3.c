#include <stdio.h>

/**
 * main - prints combo of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int k, e;

	for (k = '0'; k <= '9'; k++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			if (k < e)
			{
				putchar(k);
				putchar(e);

				if (k != '8' || (k == '8' && e != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
