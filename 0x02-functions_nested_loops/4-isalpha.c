#include "holberton.h"

/**
 *_isalpha - Cheks for if is a letter
 *@c: The character to check
 *Description: Function for check a char
 *Return: 1 to letter
 *On other case, 0 is returned.
 *
 **/

int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
		return (1);
	else
		return (0);
}
