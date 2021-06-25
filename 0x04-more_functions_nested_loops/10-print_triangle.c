#include "holberton.h"

/**
 *print_triangle - Prints a triangle
 *@size: Size of the triangle
 *Description: Function for prints a triangle
 *
 **/

void print_triangle(int size)
{
int i;
int j;
int k;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(32);
}
for (k = j; k < size; k++)
{
_putchar(35);
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
