#include "holberton.h"

/**
 *_isupper - Check if character is upper or not
 *@c: character passed
 *Description: Function for check a character
 *Return: 1 is upper, 0 otherwise
 *
 **/

int _isupper(int c)
{
  if ((c > 64) && (c < 91))
    {
      return (1);
    }

  return (0);
}
