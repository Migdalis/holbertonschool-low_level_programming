#include <stdio.h>
#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int po, i;

	i = 0;
	if (n == 0)
		_putchar('0' + ((n >> i) & 1));
	else
	{
		while (n >> i)
		{
			i++;
		}
		po = i - 1;
		while (n >> po)
		{
			_putchar('0' + ((n >> po) & 1));
			po--;
		}
	}
}
