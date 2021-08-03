#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that frees a list
 * @head: Head of a list
 * Return: The value of head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int value_l;

	if (!head)
		return (0);
	value_l = (*head)->n;
	aux = (*head)->next;
	free(head);
	*head = aux;

	return (value_l);
}
