#include "hash_tables.h"

/**
 * key_index - return the index in the table based on
 * the hash and the size of the table
 * @key: the key
 * @size: the size of the table
 * Return: the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
