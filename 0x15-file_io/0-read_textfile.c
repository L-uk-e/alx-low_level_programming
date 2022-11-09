#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to the POSIX
 * standard output.
 * @filename: Name of file
 * @letters: Number of letters to be read and printed
 *
 * Return: Number of it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *thetext;
	ssize_t written, wread;

	thetext = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	wread = read(fd, thetext, letters);

	close(fd);

	written = write(1, thetext, wread);

	if (written == -1)
	{
		return (0);
	}

	free(thetext);

	return (written);
}
