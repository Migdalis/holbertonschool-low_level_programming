#include "main.h"

/**
 *print_diagsums - Sum of the two diagonals
 *@a: Matrix to add
 *Description: Function that prints the sum of the two diagonals of a square matrix of integers
 *
 **/

void print_diagsums(int *a, int size)
{
	int i = 0, j, sum1 = 0, sum2 = 0;

	j = (size * size) - size;
	for (i = 0; i < (size * size);)
	{
		sum1 += a[i];
		sum2 += a[j];
		j = j - (size - 1);
		i = i + size + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
