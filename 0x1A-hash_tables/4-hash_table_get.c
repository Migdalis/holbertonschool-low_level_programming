#include "hash_tables.h"

/**
 * hash_table_get - unction that retrieves a value associated with a key
 * @ht: hash table where to look into
 * @key: key to looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	aux = ht->array[idx];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
	}
	return (NULL);
}
