#include "holberton.h"

/**
 *_pow_recursion - Power of a number
 *@x: Number base
 *@y: Number power
 *Description: Function that raised to the power of y
 *Return: A integer to x raised, -1 if y is lower than 0
 *
 **/

int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, (y - 1)));
}
if (y < 0)
{
return (-1);
}
else
{
return (1);
}
}
