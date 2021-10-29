#include "main.h"

/**
 *_calloc - Allocates memory for an array
 *@nmemb: Elements
 *@size: Bytes
 *Description: Function that allocates memory for an array, using malloc
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
	if (!new_array)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		new_array[i] = '\0';
	}
	return (new_array);
}
