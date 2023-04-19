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
	if (name == NULL || f == NULL)
		return;
	f(name);
}
