#include "holberton.h"

/**
 *factorial - Factorial of a number
 *@n: Given number
 *Description: Function that calculate the factorial of a given number
 *Return: A integer to factorial, -1 if n is lower than 0
 *
 **/

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
if (n < 0)
{
return (-1);
}
else
{
return (1);
}
}
