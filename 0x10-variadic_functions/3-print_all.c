#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types of args
 * @format: type of data used
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *str;

	va_start(args, format);

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
				{
					printf("%s", str);
				}
				break;
		}
		p++;

		if (*p != '\0' && (*p == 'c' || *p == 'i' || *p == 'f' ||
					 *p == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");

	va_end(args);
}
