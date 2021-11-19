#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Decimal number one
 * @m: Decimal number two
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, var;

	var = n ^ m;
	while (var > 0)
	{
		if (var & 1)
			bits += 1;
		var = var >> 1;
	}
	return (bits);
}
