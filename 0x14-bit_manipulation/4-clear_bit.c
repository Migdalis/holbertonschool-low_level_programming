#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit
 * @n: Decimal number
 * @index: Bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
