#include "holberton.h"

/**
 *_strlen - Length of a string
 *@s: Pointer to string
 *Description: Function for get length of a string
 *Return: Integer of length
 *
 **/

int _strlen(char *s)
{
int i;

i = 0;
while (*(s + i) != '\0')
{
i++;
}

return (i);
}
