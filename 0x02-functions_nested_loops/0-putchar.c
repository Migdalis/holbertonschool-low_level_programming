#include <string.h>
#include "main.h"

/**
 *main - Prints _putchar
 *Description: Function for prints a word
 *Return: 0 to success
 *
 *Display a text on screen
 **/

int main(void)
{
	unsigned long int i;
	char word[] = "_putchar\n";

	i = 0;
	while (i < strlen(word))
	{
		_putchar(word[i]);
		i++;
	}
	return (0);
}
