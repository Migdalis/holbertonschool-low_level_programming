#include "holberton.h"

/**
 *_puts - Prints a string
 *@*s: Pointer to string
 *Description: Function for prints a string
 *Return: void
 *
 **/

void _puts(char *str)
{
int i;

i = 0;
while (*(str+i) != '\0')
{
_putchar(*(str+i));
i++;
}

_putchar(10);
}
