#include "holberton.h"

/**
 *_abs - Absolute value of a number
 *@n: The number to check
 *Description: Function for find abs a number
 *Return: absolute value to n
 *
 **/

int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);

	return (n);
}
