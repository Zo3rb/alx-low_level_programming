#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: FizzBuzz Test.
 *
 * Return: Nothing.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
		i++;
	}
	putchar('\n');

	return (0);
}
