#include <stdlib.h>
#include <stdio.h>

/**
 *main - Change cents
 *@argc: Size of argv
 *@argv: Argument vector
 *Description: prints the minimum number of coins
 *to make change for an amount of money
 *Return: 1 if Error or 0 to success
 *
 **/

int main(int argc, char *argv[])
{
	int coins = 0, money, i;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i] && money > 0)
			{
				if (money % cents[i] == 0)
				{
					coins = coins + (money / cents[i]);
					break;
				}
				else
				{
					coins = coins + (money / cents[i]);
					money = money % cents[i];
				}
			}
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
