#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: a program that multiplies two numbers.
 * @argc: the count of the arguments passed to.
 * @argv: the Arguments its self.
 *
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (EXIT_SUCCESS);
}
