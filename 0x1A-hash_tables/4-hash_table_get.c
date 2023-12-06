#include "hash_tables.h"

/**
 * hash_table_get - get a value merged with specific key
 * @ht: the table to search
 * @key: the key to search for
 * Return: The value, or NULL if the key is not there
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	uli index;
	hash_node_t *node;

	if (!ht)
		return (NULL);
	index = key_index((unsigned char *) key, ht->size);
	node = search_key((hash_table_t *) ht, index, key);

	if (node != NULL)
		return (node->value);
	else
		return (NULL);
}
