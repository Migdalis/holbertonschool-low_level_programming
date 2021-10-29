#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers
 *@min: Min value
 *@max: Max value
 *Return: The pointer to the newly created array
 *
 **/

int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	new_array = malloc(size * sizeof(int));
	if (!new_array)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		new_array[i] = min;
		min++;
	}

	return (new_array);
}
