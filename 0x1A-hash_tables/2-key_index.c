#include "hash_tables.h"

/**
 * key_index - a function that returns an index of a key in a hash table
 * @key: the key to get its index
 * @size: the size of the array of the hash table
 *
 * Return: the index for the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
