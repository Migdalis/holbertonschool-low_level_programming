#include <stdio.h>
#include "main.h"

/**
 * pow_btwo - Function that calculate a pow with base 2
 * @power: Elevate
 * Return: The result of power
 */
unsigned long int pow_btwo(unsigned long int power)
{
	if (power == 0)
		return (1);
	return (pow_btwo(power - 1) * 2);
}
/**
 * print_binary - Function that prints the binary representation of a number
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int po, i;

	i = 0;
	if (n > 1)
	{
		while (pow_btwo(i) <= n)
		{
			i++;
		}
		po = i - 1;
		for (i = po; i > 0; i--)
			_putchar('0' + ((n >> i) & 1));
	}

	_putchar('0' + ((n >> i) & 1));
}
