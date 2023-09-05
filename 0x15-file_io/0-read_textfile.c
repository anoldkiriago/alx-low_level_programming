#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;

	char *nyc;

	if (!filename)
	{
		return (0);
	}


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	nyc = malloc(sizeof(char) * letters);
	if (nyc == NULL)
		return (0);

	_read = read(fd, nyc, letters);
	if (_read == -1)
	{
		free(nyc);
		close(fd);
		return (0);
	}

	_write = write(STDOUT_FILENO, nyc, _read);
	if (_write == -1)
	{
		free(nyc);
		close(fd);
		return (0);
	}
	close (fd);
	return (_read);
}
