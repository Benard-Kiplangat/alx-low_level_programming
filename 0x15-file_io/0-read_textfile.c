#include "main.h"

/**
 * read_textfile - a function that reads a textfile and prints it to strd out
 *
 * @filename: the name of the file to read
 * @letters: the number of letters the function should read
 *
 * Return: the actual number of letters written or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int opn, opn2;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	opn = open(filename, O_RDONLY);

	if (opn == -1)
	{
		free(buf);
		return (0);
	}

	opn2 = read(opn, buf, letters);

	if (opn2 <= 0)
	{
		free(buf);
		close(opn);
		return (0);
	}

	printf("%s", buf);

	close(opn);
	free(buf);
	return (opn2);
}
