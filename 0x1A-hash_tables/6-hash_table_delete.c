#include "hash_tables.h"

/**
 * hash_table_delete - delete a whole hash_table
 * @ht: the table to free
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	uli i;
	hash_node_t *node, *temp;

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