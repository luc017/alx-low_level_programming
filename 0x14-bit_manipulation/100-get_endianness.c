#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *d = (char *)&i;

	if (*d)
		return (1);
	else
		return (0);
}
