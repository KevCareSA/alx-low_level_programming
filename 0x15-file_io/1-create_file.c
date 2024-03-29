#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to file name
 * @text_content: A pointer to a string that write to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(opn, text_content, len);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
