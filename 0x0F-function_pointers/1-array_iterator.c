#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator - Executes a function
 *@array: Array of element
 *@size: Size of the array
 *@action: Pointer to the function
 *Description: Function that executes a function given as a parameter on each
 *element of an array
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
