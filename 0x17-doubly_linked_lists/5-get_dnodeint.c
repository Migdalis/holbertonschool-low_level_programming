#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a dlistint_t linked list
 * @head: Head of the dlistint list
 * @index: nth node to search
 * Return: the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	while (aux && (i <= index))
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
	return (NULL);
}
