#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: Head of the dlistint list
 * Return: the nth node or NULL if the node does not exist
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	for (; aux;)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
