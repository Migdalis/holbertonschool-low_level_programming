#include <stdlib.h>
#include <stdio.h>

/**
 *main - Add all numbers
 *@argc: Size of argv
 *@argv: Argument vector
 *Description: Add all numbers passed
 *Return: The result of add or error
 *
 **/

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
if (argc > 0)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
}

printf("%d\n", sum);
return (0);
}
