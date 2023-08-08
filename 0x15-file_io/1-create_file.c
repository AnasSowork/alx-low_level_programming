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
	int filedesc, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filedesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filedesc, text_content, len);

	if (filedesc == -1 || w == -1)
		return (-1);

	close(filedesc);

	return (1);
}
