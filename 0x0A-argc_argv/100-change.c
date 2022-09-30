#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the count of the arguments passed to.
 * @argv: the Arguments its self.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int currency, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		currency = atoi(argv[1]);
		while (currency > 0)
		{
			if (currency >= 25)
				currency -= 25;
			else if (currency >= 10)
				currency -= 10;
			else if (currency >= 5)
				currency -= 5;
			else if (currency >= 2)
				currency -= 2;
			else if (currency >= 1)
				currency -= 1;
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
