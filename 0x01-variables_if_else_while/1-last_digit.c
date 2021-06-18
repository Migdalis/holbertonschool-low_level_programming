#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - display a last digit of a number
 *Description: Function for display a digit
 *Return: 0 to success
 *
 *Display a digit on screen
 **/
int main(void)
{
int n;
int digito;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
digito = n % 10;
if (digito > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digito);
else
{
if (digito == 0)
printf("Last digit of %d is %d and is 0\n", n, digito);
else
if ((digito < 6) && (n != 0))
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digito);
}
return (0);
}
