#include "3-calc.h"
#include <stdio.h>
#include <stdio.h>
/**
 * get_op_func - function that selects the correct operator
 * @s: pointer to operator
 *
 * Return: pointer to func corresponding to operator passed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
