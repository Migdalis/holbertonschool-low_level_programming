#include <stdio.h>

/**
 *main - Print my name
 *@argc: Size of argv
 *@argv: Argument vector
 *Description: Print name of program using argv
 *Return: 0
 *
 **/

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
