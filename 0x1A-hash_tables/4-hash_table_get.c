#include "hash_tables.h"



/**
 * hash_table_get - value with a key
 * @ht: hash table
 * @key: key value
 * Return: value with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

