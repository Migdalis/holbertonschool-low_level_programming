#include "main.h"

/**
 *_memset - Fills memory
 *@s: Pointer to the memory area
 *@b: Constant byte
 *@n: num bytes to fill
 *Description: Function that fills memory with a constant byte
 *Return: A pointer to the memory area s
 *
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
