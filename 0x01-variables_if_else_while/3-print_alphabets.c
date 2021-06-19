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
char abc[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z'};

char ABC[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z'};
unsigned int i;
i = 0;

while (i < strlen(abc))
{
putchar(abc[i]);
i++;
}

i = 0;
while (i < strlen(ABC))
{
putchar(ABC[i]);
i++;
}

putchar(10);
return (0);
}
