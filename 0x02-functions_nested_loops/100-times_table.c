#include "main.h"

/**
 *print_times_table - Prints the n times table
 *Description: Function for prints all tables
 *Return: void
 *
 **/

void print_times_table(int n)
{
	int i;
	int j;
	int mult, aux;

	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (mult < 10)
			{
				if (j > 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + mult);
			}
			if ((mult >= 10) && (mult < 100))
			{
				_putchar(32);
				_putchar(32);
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
			if (mult >= 100)
			{
				_putchar(32);
				aux = mult % 100;
				_putchar('0' + mult / 100);
				_putchar('0' + aux / 10);
				_putchar('0' + aux % 10);
			}
			if (j < n)
			{
				_putchar(44);
			}
		}
		_putchar('\n');
	}
}
