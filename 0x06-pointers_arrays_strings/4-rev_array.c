#include "main.h"
#include <stdio.h>

/**
 *_strcmp - Compares two strings
 *@s1: String to compare
 *@s2: String to compare
 *Description: Function that compares two strings
 *Return: An integer less than, equal to, or greater 
 *than zero if s1 is found, respectively, to be less than, 
 *to match, or be greater than s2
 *
 **/

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}	
}
