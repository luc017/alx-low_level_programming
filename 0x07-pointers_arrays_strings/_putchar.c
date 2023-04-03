#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: The char to print
 *
 * Return: 1 (success)
 * error, -1 is returned.
 */
int _putchar(char c)
{
	  return (write(1, &c, 1));
}
