#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of a string
 * @str: pointer
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (length == -1)
		return (-1);
	return (1);
}
