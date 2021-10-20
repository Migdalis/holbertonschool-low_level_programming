#include "main.h"
#include <stddef.h>

/**
 *_strstr - Locates a substring
 *@haystack: String initial
 *@needle: Bytes to search
 *Description: Function that searches a string for any of a set of bytes
 *Return: A pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 *
 **/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k = 0;

	if (*haystack != '\0' && *needle == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; haystack[k] == needle[j]; j++)
			{
				k++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
