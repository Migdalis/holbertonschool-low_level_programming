#include "holberton.h"

/**
 *_strncpy - Copy a string
 *@dest: String final
 *@src: String to copy
 *@n: bytes to copy
 *Description: Function for copies a string
 *Return: A pointer to string copied
 *
 **/

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while ((*(src + i) != '\0'))
{
i++;
}

if (i > 0)
{
int j;
j = 0;
while ((*(src + j) != '\0') && (j < n))
{
dest[j] = src[j];
j++;
}

}
if (src[i] == '\0')
dest[i] = '\0';

return (dest);
}
