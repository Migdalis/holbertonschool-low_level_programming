#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: Head of a list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *aux;

	while (*head)
	{
		aux = (*head)->next;
		(*head)->next = next;
		next = aux->next;
		aux->next = *head;
		*head = next;
		next = aux;
	}

	*head = next;
	return (*head);
}
