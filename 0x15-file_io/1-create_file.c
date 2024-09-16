#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates file with specific permissions and content
 * @filename: name of file
 * @text_content: NULL-terminated string to write the file
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;
	int length;

	length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes_written == 1 || bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
