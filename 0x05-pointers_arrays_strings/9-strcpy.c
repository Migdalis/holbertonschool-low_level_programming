#include "holberton.h"

/**
 *_strcpy - Copy an string
 *@dest: String copied
 *@src: String original
 *Description: Function for copy an string
 *Return: A pointer to new string
 *
 **/

char *_strcpy(char *dest, char *src)
{
int i;
int j;

i = 0;
while (*(src + i) != '\0')
{
i++;
}

for (j = 0; j < i; j++)
{
dest[j] = src[j];
}

return (dest);
}
