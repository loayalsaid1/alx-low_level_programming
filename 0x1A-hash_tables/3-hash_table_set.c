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

	node = search_key(ht, index, key);
	if (node)
	{
		free(node->value);
		node->value = strdup(value);
	}
	else
	{
		node = make_node(key, value);
		if (node == NULL)
			return (0);

		if (ht->array[index])
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
		else
			ht->array[index] = node;
	}
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
 * search_key - search for existence of a key in slot in a
 * hash table
 * @ht: the table
 * @index: the index of the slot
 * @key: the key to search for
 * Return: The node of the key if it exists and NULL otherwise
*/
hash_node_t *search_key(hash_table_t *ht, uli index, const char *key)
{
	hash_node_t *temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next;
	}
	/**
	 * if it's end of the loop(or loop didn't start at all), then it's NULL,
	 * a node with the right key otherwise
	*/
	return (temp);
}
