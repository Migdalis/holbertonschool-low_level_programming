#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_one, *tmp_two;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp_one = ht->array[i];
			while (tmp_one != NULL)
			{
				tmp_two = tmp_one->next;
				free(tmp_one->key);
				free(tmp_one->value);
				free(tmp_one);
				tmp_one = tmp_two;
			}
		}
	}
	free(ht->array);
	free(ht);
}
