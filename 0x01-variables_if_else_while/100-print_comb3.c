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
int i, j, c;
c = 49;

for (i = 48; i < 57; i++)
{
for (j = c; j < 58; j++)
{
putchar(i);
putchar(j);
if ((i == 56) && (j == 57))
break;
putchar(44);
putchar(32);
}
c++;
}
putchar(10);
return (0);
}
