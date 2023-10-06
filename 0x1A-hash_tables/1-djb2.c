#include "hash_tables"

/**
 * hash_djb2 - a function that implements djb algorithim
 * @str: the string to create its hash
 * Return: the created hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
