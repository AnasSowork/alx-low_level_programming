#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc;

	if (filename == NULL)
	{
		return (-1);
	}

	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedesc == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		ssize_t bytes_written = write(filedesc, text_content, strlen(text_content));

		if (bytes_written < 0)
		{
			close(filedesc);
			return (-1);
		}
	}

	close(filedesc);
	return (1);
}
