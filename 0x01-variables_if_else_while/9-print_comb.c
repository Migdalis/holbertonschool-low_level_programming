#include <stdio.h>

/**
 *main - display a sequence of numbers
 *Description: Function for display a sequence of numbers with space
 *Return: 0 to success
 *
 *Display a sequence of numbers on screen
 **/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i == 57)
break;
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
