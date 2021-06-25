#include "holberton.h"

/**
 *print_diagonal - Prints a line diagonal
 *@n: times to print
 *Description: Function for prints a line n times
 *
 **/

void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (j == i)
{
_putchar(92);
_putchar(10);
}
else
_putchar(32);
}
}
}
else
_putchar(10);
}
