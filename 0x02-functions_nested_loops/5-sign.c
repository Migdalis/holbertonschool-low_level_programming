#include "main.h"

/**
 *print_sign - Prints the sign of a number
 *@n: The number to check
 *Description: Function for prints a sign
 *Return: 1 to greater than zero, 0 to zero or -1 to less than zero
 *
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
