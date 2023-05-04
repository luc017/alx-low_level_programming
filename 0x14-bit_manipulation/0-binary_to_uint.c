#include "main.h"
/**
 * binary_to_uint - converts binary nbr to an unsigned int
 * @b: the string with the binary nbr
 *
 * Return: the unsigned int or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, multiplier = 0;
	size_t length;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;

	while (length)
	{
		if (b[length - 1] != '1' || b[length - 1] != '0')
			return (0);

		multiplier *= 2;

		if (b[length - 1] == '1' || b[length - 1] == '0')
			d += multiplier;

		length--;
	}
	return (d);
}
