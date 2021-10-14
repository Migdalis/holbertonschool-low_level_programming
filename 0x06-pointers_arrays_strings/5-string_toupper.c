#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Reverse an array
 *@a: Array to reverse
 *@n: Size of array
 *Description: Function that reverses the content of an array of integers
 *
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
