#include <stdio.h>
#include <string.h>

/**
 *main - display alphabet
 *Description: Function for display alphabet
 *Return: 0 to success
 *
 *Display alphabet on screen
 **/
int main(void)
{
char abc[25] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

unsigned int i;
i = 0;

while (i < strlen(abc))
{
putchar(abc[i]);
i++;
}

putchar(10);
return (0);
}
