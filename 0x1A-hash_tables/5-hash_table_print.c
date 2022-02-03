#include "hash_tables.h"

/**
 * hash_table_print - unction that prints a hash table
 * @ht: Pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i;
	int first = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (first)
				printf(", ");
			else
				first = 1;
			aux = ht->array[i];
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				if (aux)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
