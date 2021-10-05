#include "main.h"
#include <limits.h>

/**
 *print_last_digit - Prints the last digit of a number
 *@n: The number to check
 *Description: Function for prints the last digit
 *Return: last digit to n
 *
 **/

int print_last_digit(int n)
{
	unsigned int digit;

	if (n >= 0)
		digit = n % 10;
	if ((n < 0) && (n == INT_MIN))
		digit = ((unsigned int) n) % 10;
	else
		if (n < 0)
			digit = ((-1) * n) % 10;

	_putchar('0' + digit);
	return (digit);
}
