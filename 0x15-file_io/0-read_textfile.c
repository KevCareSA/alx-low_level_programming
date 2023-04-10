#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the file name.
 * @letters: The number of letters that should be read and print.
 *
 * Return: If filename is NULL return 0.
 *         or wr - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t opn, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wr);

}
