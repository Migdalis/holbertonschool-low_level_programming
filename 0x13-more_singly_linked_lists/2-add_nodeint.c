#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds a new node
 * @head: Head of a list
 * @n: Value of integer
 * Description: Function that adds a new node at the beginning of a list
 * Return: The new head
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
