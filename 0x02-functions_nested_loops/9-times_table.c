#include "holberton.h"

/**
 *times_table - Prints the 9 times table
 *Description: Function for prints all tables
 *Return: void
 *
 **/

void times_table(void)
{
int i;
int j;
int n;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
if (n < 10)
{
if (j > 0)
_putchar(32);
_putchar('0' + n);
if (j < 9)
{
_putchar(44);
_putchar(32);
}
}
else
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
if (j < 9)
{
_putchar(44);
_putchar(32);
}
}
}
_putchar('\n');
}
}
