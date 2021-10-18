#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locates a character
 *@s: String
 *@c: Characer to locate
 *Description: Function that locates a character in a string
 *Return: A pointer to the ocurrence of the character
 *
 **/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	if (s[i] == '\0')
		return (s + i);

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
