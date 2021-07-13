#include "holberton.h"

/**
 *_sqrt_recursion - Square root of a number
 *@n: Number to find square root
 *Description: Function that find the natural square root of a number
 *Return: A integer to square root, -1 if not have a natural square
 *
 **/
int _sqrt_recursion(int n)
{
int temp, num_sup, num_inf, i;

num_inf = 0;
num_sup = n;
i = 0;
if ((n > 0) & (n != 1))
{
while (i < num_sup)
{
temp = (num_sup + num_inf) / 2;
if ((temp *temp) == n)
return (temp);
if ((temp *temp) > n)
num_sup = temp;
else
num_inf = temp;
i++;
}
return (-1);
}
if (n < 0)
return (-1);
else
return ((n == 0) ? 0 : 1);
}
