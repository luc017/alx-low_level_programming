#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
/**
 * _close - closes a file safely
 * @message: the message of the error printed
 *
 * Return: 1 on success, -1 on failure
 */
int _close(int message)
{
	int failure;

	failure = close(message);
	if (failure < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", message);
	return (failure);
}
/**
 * main - copies files
 * @argc: arguments counts
 * @argv: array of arguments pointer
 *
 * Return: 1 success, exits otherwise
 */
int main(int argc, char *argv[])
{
	int fd_fr, fd_to, _read, _write;
	int failure;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
		_close(fd_fr);
		exit(99);
	}


	while ((_read = read(fd_fr, buf, 1024)))
	{
		if (_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(fd_fr);
			_close(fd_to);
			exit(98);
		}
		else if (_read == 0)
			break;
		_write += _read;
		failure = write(fd_to, buf, _read);
		if (failure == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(fd_fr);
			_close(fd_to);
			exit(99);
		}
	}

	failure = _close(fd_to);
	if(failure == -1)
	{
		_close(fd_fr);
		exit(100);
	}
	failure = _close(fd_fr);
	if(failure == -1)
		exit(100);
	return (0);
}
