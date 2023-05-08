#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: is the name of the created file
 * @text_content: string content
 *
 * Return: 1(success), -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, _write;
	int length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (; text_content && *(text_content + length); length++)
		;

	_write = write(file, text_content, length);
	close(file);

	if (_write == -1)
		return (-1);

	return (1);
}
