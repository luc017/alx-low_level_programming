#include "main.h"

/**
 * set_string - sets the value to a pointer to a char
 * @s: pointer to the pointer
 * @to: pointer
 *
 */
void set_string(char **s, char *to)
{
	char c;

	to = &c;
	s = &to;
}
