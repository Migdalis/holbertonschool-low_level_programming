#include <stdio.h>

/**
 *main - Prints numbers from 1 to 100
 *Description: Function for prints Fizz-Buzz for multiples
 *of 3 and 5 respectively
 *Return: 0 success
 *
 **/

int main(void)
{
	int i;
	int mult3;
	int mult5;

	for (i = 1; i < 101; i++)
	{
		mult3 = i % 3;
		mult5 = i % 5;

		if ((mult3 == 0) && (mult5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (mult3 == 0)
				printf("Fizz");
			else
			{
				if (mult5 == 0)
					printf("Buzz");
				else
					printf("%d", i);
			}
		}
		if (i == 100)
			putchar(10);
		else
			putchar(32);
	}

	return (0);
}
