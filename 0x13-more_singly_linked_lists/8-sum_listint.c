#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Function that sum all data of a list
 * @head: Head of a list
 * Return: The sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
