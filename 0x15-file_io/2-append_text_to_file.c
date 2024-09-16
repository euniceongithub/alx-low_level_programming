#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: NULL-terminated string to append to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length;

	length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || bytes_written != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

