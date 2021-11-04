#include <stddef.h>
#include "function_pointers.h"

/**
 *int_index - Searches for an integer
 *@array: Array of integer
 *@size: Number of elements in the array
 *@cmp: Pointer to Function
 *Description: Function that searches for an integer
 *
 * Return: The index of the first element found or -1 if no element matches
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
