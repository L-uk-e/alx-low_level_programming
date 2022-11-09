#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;
	int written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (*(text_content + count) != '\0')
		{
			count++;
		}
	}

	written = write(fd, text_content, count);
	if (written == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
