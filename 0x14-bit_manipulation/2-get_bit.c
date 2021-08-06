#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function that prints the binary representation of a number
 * @n: Decimal number
 * @index: Bit to return
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int copy = n;

	while (copy)
	{
		copy = copy >> 1;
		i++;
	}
	if (index > i)
		return (-1);
	return ((n >> index) & 1);
}
