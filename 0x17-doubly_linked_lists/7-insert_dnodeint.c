#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: Head of the dlistint
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - Function that inserts a new node at
 * a given position
 * @h: Head of the dlistint list
 * @idx: index of the list where the new node should be added
 * @n: int to copy in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux = *h;
	unsigned int i = 0;

	if (dlistint_len(*h) < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (aux && (i <= idx))
	{
		if (i == idx)
		{
			new_node->prev = aux->prev;
			aux->prev->next = new_node;
			new_node->next = aux;
			aux->prev = new_node;
		}
		aux = aux->next;
		i++;
	}
	return (new_node);
}
