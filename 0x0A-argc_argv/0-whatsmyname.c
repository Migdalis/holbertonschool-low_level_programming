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
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
