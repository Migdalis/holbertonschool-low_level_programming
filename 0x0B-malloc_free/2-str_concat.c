#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"

/**
 *str_concat - Concatenates two strings
 *@s1: String 1 to concatenates
 *@s2: String 2 to concatenates
 *Description: Function that concatenates two strings
 *Return: A pointer to new allocated or null if it fails
 *
 **/

char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, size1, size2, size;

if (s1 == NULL)
size1 = 0;
else
for (size1 = 0; s1[size1] != '\0'; size1++)
{
}
if (s2 == NULL)
size2 = 0;
else
for (size2 = 0; s2[size2] != '\0'; size2++)
{
}
size = size1 + size2 + 1;
concat = malloc(size *sizeof(char));
if (concat)
{
for (i = 0; i < size1; i++)
{
concat[i] = s1[i];
}
j = 0;
for (i = size1; i < size; i++)
{
concat[i] = s2[j];
j++;
}
concat[i] = '\0';
return (concat);
}
return (NULL);
}
