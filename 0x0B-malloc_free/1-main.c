#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
    char *s2;
    char *s3;

	s2 = _strdup(NULL);
	s3 = _strdup("");

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n%s\n%s\n", s, s2, s3);
    free(s);
    return (0);
}
