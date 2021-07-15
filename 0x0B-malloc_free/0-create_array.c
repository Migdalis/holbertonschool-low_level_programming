#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - Creates an array of chars
 *@size: Size of new array
 *@c: Char ti initializes the array
 *Description: Function that creates an array of chars, and initializes with a char
 *Return: A pointer to array or null if it fails
 *
 **/

char *create_array(unsigned int size, char c)
{
  char *new_array;
  unsigned int i;

  if (size == 0)
    return (NULL);

  new_array = malloc(size * sizeof(char));

  if (new_array)
    {
      for (i = 0; i < size; i++)
	{
	  new_array[i] = c;
	}

      return (new_array);
    }

  return (NULL);
}
