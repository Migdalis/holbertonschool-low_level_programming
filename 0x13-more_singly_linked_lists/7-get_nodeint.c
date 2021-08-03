#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function that return n node
 * @head: Head of a list
 * @index: Nodo to find
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i;

	aux = head;
	for (i = 0; i < index && aux; i++)
	{
		if (!aux->next)
			return (NULL);
		aux = aux->next;
	}
	return (aux);
}
