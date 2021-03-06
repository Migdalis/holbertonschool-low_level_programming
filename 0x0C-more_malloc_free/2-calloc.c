#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array
 *@nmemb: Elements
 *@size: Bytes
 *Return: A pointer to allocated memory or null if it fails
 *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_array = malloc(nmemb * size);
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		new_array[i] = '\0';
	}

	return (new_array);
}
