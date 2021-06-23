#include "holberton.h"

/**
 *print_alphabet_x10 - Prints alphabet
 *Description: Function for prints alphabet
 *Return: 0 to success
 *
 *Display alphabet on screen
 **/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
