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

	for (i = 0; s[i] != '\0' && s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes += 1;
				break;
			}
		}
	}
	return (bytes);
}
