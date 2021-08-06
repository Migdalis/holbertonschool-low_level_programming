#include <stdio.h>
#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	int po, i = 0;
	unsigned long int copy = n;

	while (copy)
	{
		copy = copy >> 1;
		i++;
	}
	for (po = i - 1; po >= 0; po--)
	{
		if ((n >> po) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
