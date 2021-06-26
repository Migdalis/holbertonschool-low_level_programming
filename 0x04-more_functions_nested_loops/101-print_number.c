#include "holberton.h"

/**
 *print_number - Prints a integer
 *@n: Number to print
 *Description: Function for prints a integer
 *
 **/

void print_number(int n)
{
int abs;

if (n > 0)
{
if ((n / 10) != 0)
{
print_number(n / 10);
_putchar('0' + n % 10);
}
else
{
_putchar('0' + n % 10);
}
return;
}

if (n < 0)
{
abs = (-1) * n;

if ((abs / 10) != 0)
{
_putchar(45);
print_number(abs / 10);
_putchar('0' + abs % 10);
}
}

if (n == 0)
_putchar(48);
}
