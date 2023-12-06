#include "hash_tables.h"

/**
 * hash_djb2 - implement the djb2 algorithm
 * @str: the key to hash
 * Return: the key
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	short c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
