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
	char *buffer = malloc(sizeof(char) * 1024);
	size_t opn, opn2, i = 0, j = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (access(argv[2], F_OK) == 0)
	{
		opn = open(argv[1], 1024 * 5);

		while (argv[1][i] != '\0')
		{
			for (; argv[1][i] != '\0' || i < 1024; i++)
			{
				if (i == 1023)
				{
					buffer[i + 1] = '\0';
					j = 0;
					break;
				}
				buffer[j] = argv[1][i];
				j++;
			}
			opn2 = write(opn, buffer, O_TRUNC | O_WRONLY);
			if (opn2 <= 0)
			{
				dprintf(2, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			if (close(opn) < 0)
			{
				dprintf(2, "Error: Can't close %li\n", opn);
				exit(100);
			}
	else
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

}
}
return (0);
}
