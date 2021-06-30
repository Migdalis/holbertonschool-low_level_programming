#include "holberton.h"

/**
 *print_rev - Prints a string
 *@s: Pointer to string
 *Description: Function for prints a string in reverse
 *Return: void
 *
 **/

void print_rev(char *s)
{

if (*s != '\0')
{
print_rev(s + 1);
_putchar(*s);
}
else
{

return;
}

}
