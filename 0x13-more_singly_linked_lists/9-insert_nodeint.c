#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function that insert a new node
 * @head: Head of a list
 * @idx: Index of the list to added node
 * @n: Value a new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int i;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 && aux == NULL)
	{
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1) && aux; i++)
	{
		if (!aux->next)
			return (NULL);
		aux = aux->next;
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
