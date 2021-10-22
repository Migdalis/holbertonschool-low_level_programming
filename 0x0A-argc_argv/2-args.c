#include <stdio.h>

/**
 *main - Print all arguments
 *@argc: Size of argv
 *@argv: Argument vector
 *Description: Print all arguments it receives
 *Return: 0
 *
 **/

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
