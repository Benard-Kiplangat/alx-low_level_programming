#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set -  function that adds an element to the hash table
 * @ht: the hash table to add or update the key/value
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	new_node->next = ht->array[i];
	return (1);
}
