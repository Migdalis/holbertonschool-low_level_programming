#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - Allocates memory
 *@b: Size a new memory
 *Description: Function that allocates memory using malloc
 *Return: A pointer or 98 it fails
 *
 **/

void *malloc_checked(unsigned int b)
{
void *new_memory;

new_memory = malloc(b * sizeof(void *));

if (new_memory)
return (new_memory);

exit(98);
}
