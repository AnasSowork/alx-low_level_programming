#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
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
	char buffer[letters];

	if (!filename)
		return (0);

	int fdn = open(filename, O_RDWR);

	if (fdn == -1)
		return (0);

	int R = read(fdn, buffer, letters);

	if (R == -1)
		close(fdn);
		return (0);

	int W = write(STDOUT_FILENO, buffer, R);

	if (W == -1 || W != R)
		close(fdn);
		return (0);

	close(fdn);
	return (R);
}
