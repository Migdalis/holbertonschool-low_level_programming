#include "holberton.h"

/**
 *print_line - Prints a line
 *@n: times to print
 *Description: Function for prints a line n times
 *
 **/

void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
}
_putchar(10);
}
