#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete a node
 * @head: Head of a list
 * @index: Index of the list to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *tmp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	aux = *head;
	while (i < (index - 1) && aux->next)
	{
		aux = aux->next;
		i++;
	}
	if (i < (index - 1))
		return (-1);
	tmp = aux->next;
	aux->next = tmp->next;
	free(tmp);
	return (1);
}
