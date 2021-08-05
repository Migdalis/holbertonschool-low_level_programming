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
	unsigned long int prev, current, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	i = 0;
	while (pow_btwo(i) <= n)
	{
		i++;
	}
	prev = i - 1;
	current = n;
	while (prev)
	{
		if (pow_btwo(prev) <= current)
		{
			_putchar('1');
			current = current - pow_btwo(prev);
		}
		else
			_putchar('0');
		prev--;
	}
	_putchar('0' + current);
}
