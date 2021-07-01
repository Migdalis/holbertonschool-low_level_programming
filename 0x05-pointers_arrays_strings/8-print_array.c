#include <stdio.h>
#include "holberton.h"

/**
 *print_array - Prints an array
 *@a: Pointer to array
 *@n: Elements to prints
 *Description: Function for prints n elements of an array
 *Return: void
 *
 **/

void print_array(int *a, int n)
{
int i;

if (n >= 0)
{
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d\n", a[i]);
break;
}
printf("%d, ", a[i]);
}
}
else
return;
}
