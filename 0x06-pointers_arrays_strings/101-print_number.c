#include "main.h"

/**
 *print_number - Print a number
 *@n: Number to print
 *Description: Function that prints an integer
 **/

void print_number(int n)
{
	unsigned int abs;

	if (n > 0)
	{
		if ((n / 10) != 0)
		{
			print_number(n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('0' + n % 10);
		}
		return;
	}

	if (n < 0)
	{
		abs = -n;
		_putchar(45);
		if ((abs / 10) != 0)
		{
			print_number(abs / 10);
		}
		_putchar('0' + abs % 10);
	}

	if (n == 0)
		_putchar(48);
}
