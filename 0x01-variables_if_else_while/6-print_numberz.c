#include <stdio.h>

/**
 *main - display the numbers 1-10
 *Description: Function for display numbers
 *Return: 0 to success
 *
 *Display a sequence of numbers on screen
 **/
int main(void)
{
int i;
for (i = 48; i < 58 ; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
