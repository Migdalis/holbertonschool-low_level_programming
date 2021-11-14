#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: Head of a list
 * @str: String to copy in new node
 * Description: Function that adds a new node at the end of a list_t list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *aux;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = malloc(sizeof(char *) * (strlen(str) + 1));
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	aux = *head;
	while (aux)
	{
		if (!aux->next)
		{
			aux->next = new_node;
			break;
		}
		aux = aux->next;
	}

	return (new_node);
}
