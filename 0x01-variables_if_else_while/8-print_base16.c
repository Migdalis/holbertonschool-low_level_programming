#include <stdio.h>

/**
 *main - display numbers base16
 *Description: Function for display numbers base16
 *Return: 0 to success
 *
 *Display hexadecimal on screen
 **/
int main(void)
{
int i, j;

j = 39;

for (i = 48; i < 64; i++)
{
if (i < 58)
putchar(i);
else
putchar(i + j);
}
putchar(10);
return (0);
}
