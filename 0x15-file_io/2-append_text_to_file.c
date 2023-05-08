#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * append_text_to_file - appends the text to a file
 * @filename: the file we append the text
 * @text_content: the content we must append
 *
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, _write;
	int length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	for (; *(text_content + length); length++)
		;
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	_write = write(file, text_content, length);
	if (_write == -1)
		return (-1);

	return (1);
}
