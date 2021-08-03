#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints a list
 * @h: Head of a list
 * Description: Function that prints all the elements of a listint_t list
 *
 * Return: The number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
