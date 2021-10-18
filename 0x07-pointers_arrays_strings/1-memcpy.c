#include "main.h"

/**
 *_memcpy - Copy memory area
 *@dest: Pointer to the memory area final
 *@src: Memory to copy
 *@n: num bytes to copy
 *Description: Function that copies memory area
 *Return: A pointer to the memory area dest
 *
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
