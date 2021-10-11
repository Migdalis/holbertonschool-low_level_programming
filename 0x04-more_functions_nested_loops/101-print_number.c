#include "main.h"

/**
 *print_number - Prints a integer
 *@n: Number to print
 *Description: Function for prints a integer
 *
 **/

void print_number(int n)
{
	unsigned int abs;

	if (n > 0)
	{
		if ((n / 10) != 0)
		{
			print_number(n / 10);
		}
	}

	if (n < 0)
	{
		abs = -n;

		if ((abs / 10) != 0)
		{
			_putchar(45);
			print_number(abs / 10);
		}
	}

	if (n == 0)
		_putchar(48);
	_putchar('0' + n % 10);
}
