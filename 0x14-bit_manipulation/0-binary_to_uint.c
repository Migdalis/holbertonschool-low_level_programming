#include "main.h"

/**
 * power - Function that calculate a first pow
 * @b: Binary number
 * Return: The pow
 */
int power(const char *b)
{
	int p;

	if (*b == '0' || *b == '1')
	{
		p = power(b + 1);
		if (p == -2)
			return (p);
		return (p + 1);
	}
	if (*b == '\0')
		return (-1);
	return (-2);
}
/**
 * pow_btwo - Function that calculate a pow with base 2
 * @power: Elevate
 * Return: The result of power
 */
int pow_btwo(int power)
{
	if (power == 0)
		return (1);
	return (pow_btwo(power - 1) * 2);
}
/**
 * binary_to_uint - Function that converts a binary number
 * @b: Binary number
 * Return: The converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_decimal;
	int powin, i;

	if (!b)
		return (0);
	powin = power(b);
	if (powin < 0)
		return (0);
	num_decimal = 0;
	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (b[i] == '0')
		{
			powin--;
			continue;
		}
		num_decimal += pow_btwo(powin);
		powin--;
	}

	return (num_decimal);
}
