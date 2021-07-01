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

i = 0;
while (*(str + i) != '\0')
{
i++;
}

for (j = i / 2; j < i; j++)
{
_putchar(str[j]);
}
_putchar(10);
}
