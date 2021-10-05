#include "main.h"
#include <stdio.h>

/**
 *main - Prints the sum of all numbers multiples of 3 or 5
 *Description: Function for prints sum all multiples
 *of 3 or 5 between 0 to 1024
 *Return: 0
 *
 **/

int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
