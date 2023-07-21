#include "main.h"

/**
 * cp - a program that copies the content of a file to another file
 *
 * argc - the number of arguments passed
 * argv: an array containing all the arguments
 *
 * Return: 0 on success and -1 on failure
 */

int main(int argc, char **argv)
{
	char buff[10000];
	int cnt = 0, strt = 0;
	size_t opn, opn2, sz, sopn, sopn2;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	sopn = open(argv[1], O_RDONLY);

	if (access(argv[1], F_OK) == 0)
	{
		if (sopn <= 0)
			return (-1);

		sopn2 = read(sopn, buff, 10000);

		cnt = (int)sopn2;
		opn = open(argv[2], O_WRONLY | O_TRUNC);

		while (cnt > 0)
		{
			sz = cnt >= 1024 ? 1024 : cnt;
			opn2 = write(opn, buff + strt, sz);
			if (opn2 <= 0)
			{
				dprintf(2, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			printf("Count: %i\n", cnt);
			cnt = cnt - 1024;
			strt = strt + sz;
		}
	}
	else
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(opn) != 0)
	{
		dprintf(2, "Error: Can't close %li\n", opn);
		exit(100);
	}
	close(sopn);
	close(sopn2);
	close(opn2);
	return (0);
}
