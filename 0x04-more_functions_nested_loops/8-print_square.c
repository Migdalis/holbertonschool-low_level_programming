#include "holberton.h"

/**
 *print_square - Prints a square
 *@size: size of the square
 *Description: Function for prints a square
 *
 **/

void print_square(int size)
{
int i;
int j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}
