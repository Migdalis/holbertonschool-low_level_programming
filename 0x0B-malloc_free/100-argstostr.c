#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *argstostr - Concatenates all the arguments
 *@ac: Size of argv
 *@av: Argument vector
 *Description: Function that concatenates all the arguments of your program
 *Return: A pointer to a new string, or NULL if it fails
 *
 **/

char *argstostr(int ac, char **av)
{
	int i, j, size = ac, k = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	new = malloc((size + 1) * sizeof(char));
	if (new)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				new[k] = av[i][j];
				k++;
			}
			new[k] = '\n';
			k++;
		}
		new[k] = '\0';
	}
	return (new);
}
