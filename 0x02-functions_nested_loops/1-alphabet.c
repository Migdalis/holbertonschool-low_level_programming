#include "main.h"

/**
 *print_alphabet - Prints alphabet
 *Description: Function for prints alphabet
 *Return: 0 to success
 *
 *Display alphabet on screen
 **/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
