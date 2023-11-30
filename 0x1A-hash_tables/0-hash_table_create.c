#include "hash_tables.h"



/**
 * hash_table_create - to create a hash table
 * @size:  array size
 * Return: Returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_create;
	unsigned long int i;

	hash_create = malloc(sizeof(hash_table_t));
	if (hash_create == NULL)
		return (NULL);
	hash_create->size = size;
	hash_create->array = malloc(size * sizeof(hash_node_t *));
	if (hash_create->array == NULL)
	{
		free(hash_create);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_create->array[i] = NULL;
	return (hash_create);
}
