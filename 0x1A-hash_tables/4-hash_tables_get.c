#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves the value of a key
 * @ht: hash table to find the key/value pair
 * @key: the key to find its value
 * Return: value of the key or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	const unsigned char *key1 = (const unsigned char *)key;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index(key1, ht->size);
	temp = ht->array[i];

	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (var->value);
	}
	return (NULL);
}
