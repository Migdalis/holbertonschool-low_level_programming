#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: Head of a list
 * Description: Function that returns the number of elements in a linked list
 * Return: The number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (*head);
}
