#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a file and prints it out
 * @filename: the file to read and print
 * @letters: the number of letters to print
 *
 * Return: number of letters,0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int file;
	ssize_t _read, _write;

	if (filename == NULL)
		return (0);

	ch = malloc(letters);
	if (ch == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	_read = read(file, ch, letters);
	if (_read < 0)
	{
		free(ch);
		close(file);
		return (0);
	}

	_write = write(STDOUT_FILENO, ch, _read);

	free(ch);
	close(file);

	if (_write < 0 || _write != _read)
	{
		free(ch);
		close(file);
		return (0);
	}

	return (_write);
}
