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
int i, j, c, d, k;
c = 49;

for (i = 48; i < 56; i++)
{
for (j = c; j < 57; j++)
{
d = j + 1;
for (k = d; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (((i == 55) && (j == 56)) && (k == 57))
break;
putchar(44);
putchar(32);
}
}
c++;
}
putchar(10);
return (0);
}
