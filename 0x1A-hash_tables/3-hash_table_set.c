#include "hash_tables.h"

/**
 * hash_table_set - Add an elemnt to hash table
 * @ht: the table
 * @key: The key to hash
 * @value: the value to feed the node;
 * Return: 1 in success and 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	uli index;
	hash_node_t *node;

	if (!key || strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = make_node(key, value);
	if (node == NULL)
		return (0);

	if (ht->array[index])
		handle_collision(ht, node, index);
	else
		ht->array[index] = node;

	return (1);
}

/**
 * make_node - make a node and feed it with values
 * @key: the key
 * @value: the value
 * Return: the node or null
*/
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}

/**
 * handle_collision - adds a node node at the beginnning of a slot
 * in the table
 *
 * @table: the table
 * @node: the node to feed
 * @index: the index to place the node
 *
 * Return: void
 */
void handle_collision(hash_table_t *table, hash_node_t *node, uli index)
{
	node->next = table->array[index];
	table->array[index] = node;
}
