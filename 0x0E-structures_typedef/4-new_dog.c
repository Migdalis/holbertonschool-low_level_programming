#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

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

/**
 *new_dog - Create a new dog
 *@name: Name to set
 *@age: Age to set
 *@owner: Owner to set
 *
 *Return: The new dog or NULL if the function fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nam, *own;

	nam = _strdup(name);
	own = _strdup(owner);
	if (nam && own)
	{
		new = malloc(sizeof(dog_t));
		if (!new)
			return (NULL);
		new->name = nam;
		new->age = age;
		new->owner = own;
	}
	else
		return (NULL);

	return (new);
}
