#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor
 *
 * Return: 0 (success)
 **/

int main(void)
{
	long int num = 612852475143;
	long int max;
	long int i;

	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
	}

	if (num > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}
