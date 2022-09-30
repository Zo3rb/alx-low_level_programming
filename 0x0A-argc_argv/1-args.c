include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a program prints arguments count these paased to.
 * @argc: the count of the arguments passed to.
 * @argv: the Arguments its self.
 *
 * Return: Always (0).
 */
int main(int argc, char const *argv[])
{
	(void)argv;

	printf("%d\n", argc);

	return (0);
}
