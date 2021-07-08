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
int i;
int sum = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}

printf("%d\n", sum);
return (0);
}
