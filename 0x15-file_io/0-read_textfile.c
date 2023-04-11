#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints to std output
 * @filename: file to read and print
 * @letters: size to read and print
 * Return: actual size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_read, len_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	len_read = read(fd, buffer, letters);
	close(fd);
	if (len_read == -1)
	{
		free(buffer);
		return (0);
	}
	len_written = write(STDOUT_FILENO, buffer, len_read);
	free(buffer);
	if (len_read != len_written)
		return (0);
	return (len_written);
}
