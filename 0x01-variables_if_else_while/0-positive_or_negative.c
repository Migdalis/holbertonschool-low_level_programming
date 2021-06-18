#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - display a number and say if the number is positive, negative or zero
 *Description: Function for display a number
 *Return: 0 to success
 *
 *Display a number on screen
 **/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
else
{
if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}
return (0);
}
