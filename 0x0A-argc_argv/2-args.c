#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a program that prints all args passed to.
 * @argc: the count of the arguments passed to.
 * @argv: the Arguments its self.
 *
 * Return: Always (0).
 */
int main(int argc, char const *argv[])
{
int i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
