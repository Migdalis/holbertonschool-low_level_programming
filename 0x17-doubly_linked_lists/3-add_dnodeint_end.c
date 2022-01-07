#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t
 * @head: Head of the dlistint
 * @n: int to copy in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (aux->next)
			aux = aux->next;

		new_node->prev = aux;
		aux->next = new_node;
	}
	return (new_node);
}
