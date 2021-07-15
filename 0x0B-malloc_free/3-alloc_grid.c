#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"

/**
 *alloc_grid - Create an array 2D of integers
 *@width: Width of a new array
 *@height: Height of a new array
 *Description: Function that returns a pointer to a 2D array of integers
 *Return: A pointer to new array or null if it fails
 *
 **/

int **alloc_grid(int width, int height)
{
int **array2D;
int i, j;

if ((width <= 0) || (height <= 0))
return (NULL);

array2D = malloc(height * sizeof(int));

if (array2D)
{
for (i = 0; i < height; i++)
{
array2D[i] = malloc(width * sizeof(int));
if (array2D[i])
{
for (j = 0; j < width; j++)
{
array2D[i][j] = 0;
}
}
else
return (NULL);
}
return (array2D);
}
return (NULL);
}
