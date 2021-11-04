#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Redirect to correct function
 *@argc: Size of argv
 *@argv: Argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b));

	return (0);
}
