#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz buzz
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}
	}

	return (0);
}
