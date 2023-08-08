#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - a fucntion that prints
 *@filename: a string pointer.
 *@letters: is the size of the buffer.
 *
 * Return: the actual number of letters it reads
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdn;
	ssize_t w;
	ssize_t r;

	fdn = open(filename, O_RDONLY);
	if (fdn == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(fdn, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fdn);
	return (w);
}
