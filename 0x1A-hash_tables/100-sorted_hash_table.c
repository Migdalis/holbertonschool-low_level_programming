#include "hash_tables.h"

/**
 *shash_table_create - Function that creates a hash table
 *@size: size of the array
 *Return: A pointer to the newly created hash table
 *or NULL If something went wrong
 *
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(shash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->shead = NULL;
	new_ht->stail = NULL;
	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}

/**
 * add_sorted_list - Function that add a new node in a list sortedly
 * @ht: pointer to the head of a shash table
 * @node: node to be add
 */
void add_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *aux;
	
	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
		return;
	}
	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		aux = ht->shead;
		while (aux->snext && strcmp(aux->snext->key, node->key) < 0)
		{
			aux = aux->snext;
		}
		node->sprev = aux;
		node->snext = aux->snext;
		if (!aux->snext)
			ht->stail = node;
		else
			aux->snext->sprev = node;
		aux->snext = node;
	}
}

/**
 * shash_table_set - Function that adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *aux;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->shead;
	for (; aux; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0) /*Update*/
		{
			free(aux->value);
			aux->value = strdup(value);
			if (!aux->value)
				return (0);
			return (1);
		}
	}

	new_node = malloc(sizeof(shash_node_t)); /*Add*/
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	add_sorted_list(ht, new_node);

	return (1);
}

/**
 * shash_table_get - unction that retrieves a value associated with a key
 * @ht: hash table where to look into
 * @key: key to looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *aux;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	aux = ht->shead;
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}

/**
 * shash_table_print - unction that prints a hash table
 * @ht: Pointer to the shash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;

	if (!ht)
		return;

	printf("{");
	aux = ht->shead;
	for (; aux; aux = aux->snext)
	{
		printf("'%s': '%s'", aux->key, aux->value);
		if (aux->snext)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function that print the hash tables key/value pairs
 * in reverse order using the sorted linked list
 * @ht: Pointer to the shash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;

	if (!ht)
		return;

	aux = ht->stail;
	printf("{");
	for (; aux; aux = aux->sprev)
	{
		printf("'%s': '%s'", aux->key, aux->value);
		if (aux->sprev)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Function that deletes a hash table
 * @ht: Pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || !ht->size)
		return;

	tmp = ht->shead;
	while (tmp)
	{
		ht->shead = ht->shead->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = ht->shead;
	}
	free(ht->array);
	free(ht);
}
