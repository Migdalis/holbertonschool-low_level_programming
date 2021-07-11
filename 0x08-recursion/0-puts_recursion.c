#include "holberton.h"

/**
 *_puts_recursion - Print a string
 *@s: String to print
 *Description: Function that print a string with recursion
 *
 **/

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar(10);
}
}
