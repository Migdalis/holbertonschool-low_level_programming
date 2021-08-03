#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: Head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
}