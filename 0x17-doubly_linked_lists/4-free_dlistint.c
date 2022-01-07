#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head of the dlistint
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
