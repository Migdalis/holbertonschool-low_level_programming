#include "holberton.h"

/**
 *puts2 - Prints half string
 *@str: Pointer to string
 *Description: Function for prints half string
 *Return: void
 *
 **/

void puts2(char *str)
{
int i;

i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar(10);
}
