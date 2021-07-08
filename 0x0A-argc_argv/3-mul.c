#include <stdlib.h>
#include <stdio.h>

/**
 *main - Multiplies two numbers
 *@argc: Size of argv
 *@argv: Argument vector
 *Description: Multiplies two numbers
 *Return: The result of multiplies or error
 *
 **/

int main(int argc, char *argv[])
{
int mult;
if (argc > 2)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
return(0);
}

printf("Error\n");
return (1);
}
