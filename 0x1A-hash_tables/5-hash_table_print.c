#include "hash_tables.h"


/**
 * hash_table_print - print a hash table with the format of Python
 * dict
 * @ht: the table
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	uli i;

	if (!ht || ht->size == 0 || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
			break;
	}

	if (!temp)
	{
		printf("}\n");
		return;
	}
	printf("'%s': '%s'", temp->key, temp->value);

	temp = temp->next;
	while (i < ht->size)
	{
		while (temp)
		{
			printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		temp = ht->array[++i];
	}

	printf("}\n");
}
