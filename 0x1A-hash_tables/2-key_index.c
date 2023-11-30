#include "hash_tables.h"

/**
 * key_index - the index of the key
 * @key: key for index
 * @size: hash table size
 * Return: the key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
