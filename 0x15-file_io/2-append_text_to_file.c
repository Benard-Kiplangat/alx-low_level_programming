#include "main.h"

/**
 * append_text_to_file - a function that appends text to a file
 *
 * @filename: the name of the file to add text
 * @text_content: the content to append to the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, i;
	size_t opn2, sz;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_WRONLY | O_CREAT | O_APPEND, 00600);

	if (opn < 0)
		return (-1);

	if (opn && !text_content)
	{
		close(opn);
		return (1);
	}

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
