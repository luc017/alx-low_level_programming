#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: takes a string argument
 * @f: pointer to the print_name function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	if (name == NULL || f == NULL)
		return;

	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
}
