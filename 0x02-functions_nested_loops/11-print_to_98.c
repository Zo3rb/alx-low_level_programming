#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: prints all natural numbers from n to "98",
 * followed by a new line.
 * @n: the Number to start with.
 *
 * Return: nothing.
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
