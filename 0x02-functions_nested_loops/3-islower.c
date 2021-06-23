#include "holberton.h"

/**
 *_islower - Cheks for lowercase
 *@c: The character to check
 *Description: Function for check a char
 *Return: 1 to lowercasa
 *On other case, 0 is returned.
 *
 **/

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
