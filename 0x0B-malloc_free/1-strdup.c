#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *_strdup - Copy of a string
 *@str: String to copy
 *Description: Function that copy a string given as a parameter
 *Return: A pointer to new string or null if it fails
 *
 **/

char *_strdup(char *str)
{
	char *new_array;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	size = i + 1;
	new_array = malloc(size * sizeof(char));

	if (new_array)
	{
		for (i = 0; i < size; i++)
		{
			new_array[i] = str[i];
		}
		return (new_array);
	}

	return (NULL);
}
