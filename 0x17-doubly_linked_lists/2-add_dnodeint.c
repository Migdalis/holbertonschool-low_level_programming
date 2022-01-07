#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t
 * @head: Head of the dlistint
 * @n: int to copy in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
		new_node->next = NULL;
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
