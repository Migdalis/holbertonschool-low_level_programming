#include <stdio.h>

/**
 *main - display a text
 *Description: Function for display a text
 *Return: 0 to success
 *
 *Display a text on screen
 **/
int main(void)
{
char abc;

for (abc = 'z'; abc >= 'a'; abc--)
{
putchar(abc);
}

putchar(10);
return (0);
}
