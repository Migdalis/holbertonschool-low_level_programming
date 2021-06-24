#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - Prints numbers from n to 98
 *@n: number passed
 *Description: Function for prints all natural numbers
 *Return: void
 **/

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d\n", i);
return;
}
printf("%d, ", i);
}
}
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d\n", i);
return;
}
printf("%d, ", i);
}
}
else
printf("%d\n", n);
}
