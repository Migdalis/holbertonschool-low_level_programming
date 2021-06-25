#include "holberton.h"

/**
 *_isdigit - Check for a digit
 *@c: Character passed
 *Description: Function for checks if a char is a digit
 *Return: 1 is a digit, 0 otherwise
 *
 **/

int _isdigit(int c)
{
  if ((c > 47) && (c < 58))
    {
      return (1);
    }

  return (0);
}
