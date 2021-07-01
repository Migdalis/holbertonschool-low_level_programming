#include "holberton.h"

/**
 *puts_half - Prints half string
 *@str: Pointer to string
 *Description: Function for prints the second half of a string
 *Return: void
 *
 **/

void puts_half(char *str)
{
int i;
int j;
int n;

i = 0;
while (*(str + i) != '\0')
{
i++;
}
if (i % 2 != 0)
n = (i + 1) / 2;
else
n = i / 2;
for (j = n; j < i; j++)
{
_putchar(str[j]);
}
_putchar(10);
}
