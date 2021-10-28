#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *string_nconcat - Concatenates two strings
 *@s1: String 1 to concatenates
 *@s2: String 2 to concatenates
 *@n: Bytes of s2 to concatenates
 *Description: Function that concatenates two strings
 *Return: A pointer to new allocated or null if it fails
 *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j = 0, size1, size2;

	if (s1 == NULL)
		size1 = 0;
	else
		for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	if (s2 == NULL)
		size2 = 0;
	else
		for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n > size2)
		n = size2;
	concat = malloc((size1 + n + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	for (i = 0; i < size1 ; i++)
	{
		concat[i] = s1[i];
	}
	for (i = i; i < (size1 + n); i++)
	{
		concat[i] = s2[j];
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
