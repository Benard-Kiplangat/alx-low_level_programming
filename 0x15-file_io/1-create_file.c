#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: the name of the new file
 * @text_content: the content to write to the file
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int opn, i;
	size_t opn2, sz;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (opn < 0)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	sz = sizeof(char) * i;

	opn2 = write(opn, text_content, sz);
	if (opn2 > 0)
	{
		close(opn2);
		return (1);
	}
	return (-1);
}
