#include "holberton.h"

/**
 *print_last_digit - Prints the last digit of a number
 *@n: The number to check
 *Description: Function for prints the last digit
 *Return: last digit to n
 *
 **/

int print_last_digit(int n)
{
  int digit;

  if (n > 0)
    digit = n % 10;
  else
    digit = ((-1) * n) % 10;

  _putchar('0' + digit);
  return (digit);
}
