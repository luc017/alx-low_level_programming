#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @file: is the name of the created file
 * @text_content: string content
 *
 * Return: 1(success), -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen("filename", "rw");

	fprintf(file, "%s", text_content);

	fclose(fp);

	return (1);
}
