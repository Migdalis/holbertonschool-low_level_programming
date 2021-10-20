#include "main.h"

/**
 *_strlen_recursion - Length of a string
 *@s: String to find length
 *Description: Function that count the length of a string
 *Return: A integer to length
 *
 **/

int _strlen_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
	else
		return (0);
}
