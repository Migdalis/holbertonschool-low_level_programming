#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, frd, fwr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer)
	{
		frd = read(fd, buffer, letters);
		if (frd == -1)
			return (0);
		fwr = write(STDOUT_FILENO, buffer, frd);
		if (fwr == -1)
			return (0);
		close(fd);
		free(buffer);
	}
	return (fwr);
}
