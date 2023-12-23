#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hashtable
 * @size: the size of the hash table
 * Return: a hashtable
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}



/**
 * ssearch_key - search for existence of a key in slot in a
 * hash table
 * @ht: the table
 * @index: the index of the slot
 * @key: the key to search for
 * Return: The node of the key if it exists and NULL otherwise
*/
shash_node_t *ssearch_key(shash_table_t *ht, uli index, const char *key)
{
	shash_node_t *temp = ht->array[index];

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



/**
 * smake_node - make a node and feed it with values
 * @key: the key
 * @value: the value
 * Return: the node or null
*/
shash_node_t *smake_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_table_set - Set a value in a sorted hashtable
 * @ht: the table being added to
 * @key: The key to be hased
 * @value: the value
 * Return: 1 if all went good, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	uli index;
	shash_node_t *node;

	if (!key || strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	node = ssearch_key(ht, index, key);
	if (node)
	{
		free(node->value);
		node->value = strdup(value);
		if (node->value == NULL)
			return (0);
	}
	else
	{
		node = smake_node(key, value);
		if (node == NULL)
			return (0);

		if (ht->array[index])
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
		else
			ht->array[index] = node;


		if (sorted_insert(ht, node) == 0)
		{
			free(node->key);
			free(node->value);
			free(node);
			return (0);
		}
	}
	return (1);
}


/**
 * sorted_insert - insert a node at it's place in the sorted list
 * @table: the hash table
 * @node: the node itself
 * Return: 1 on success, 0 otherwiee
*/
int sorted_insert(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp = table->shead;

	if (table->shead == NULL)
	{
		table->shead = table->stail = node;
		return (1);
	}
	while (temp != NULL)
	{

		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				table->shead = node;
			return (1);
		}
		temp = temp->snext;
	}
	if (temp == NULL)
	{
		node->sprev = table->stail;
		table->stail->snext = node;
		table->stail = node;
	}

	return (1);
}

/**
 * shash_table_get - search a node, by sorted search
 * @ht: the table to search
 * @key: the key
 * Return: the value corresponding to that key
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - print the hashtable in a srted way
 * @ht: the table
 * return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL || ht->shead == NULL)
	{
		if (ht)
			printf("{}\n");
		return;
	}

	putchar('{');

	temp = ht->shead;
	printf("'%s': '%s'", temp->key, temp->value);
	temp = temp->snext;

	while (temp)
	{
		printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print the hashtable in a srted way in reverse order
 * @ht: the table
 * return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL || ht->shead == NULL)
	{
		if (ht)
			printf("{}\n");
		return;
	}

	putchar('{');

	temp = ht->stail;
	printf("'%s': '%s'", temp->key, temp->value);
	temp = temp->sprev;

	while (temp)
	{
		printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - delete a whole hash_table
 * @ht: the table to free
 * Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	uli i;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);

			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
