#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node
 * @head: Head of a list
 * @n: Value of integer
 * Description: Function that adds a new node at the end of a list
 * Return: The address of the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (aux)
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
		*head = new;
	return (new);
}
