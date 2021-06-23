#include "holberton.h"
#include <stdio.h>

/**
 *times_table - Prints the 9 times table
 *Description: Function for prints all tables
 *Return: void
 *
 **/

void times_table(void)
{
  int i;
  int j;

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  if (j == 9)
	    printf("%-2d\n", i * j);
	  else
	    printf("%-2d, ", i * j);
	}
    }
}
