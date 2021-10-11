#include "main.h"

/**
 *more_numbers - Prints numbers 0 to 14
 *Description: Function for prints numbers 10 times
 *
 **/

void more_numbers(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar((j < 10) ? '0' + j : 49);
			if (j >= 10)
			{
				r = j % 10;
				_putchar('0' + r);
			}
		}
		_putchar(10);
	}
}
