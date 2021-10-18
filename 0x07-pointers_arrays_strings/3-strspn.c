#include "main.h"
#include <stddef.h>

/**
 *_strspn - Get length of a prefix
 *@s: Initial segment
 *@accept: Bytes to get
 *Description: Function that gets the length of a prefix substring
 *Return: The number of bytes in the initial segment of s which
 *consist only of bytes from accept
 *
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				bytes += 1;
				break;
			}
		}
	}
	if (bytes > 0)
		bytes++;
	return (bytes);
}
