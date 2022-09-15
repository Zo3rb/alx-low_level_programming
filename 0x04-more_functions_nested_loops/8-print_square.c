#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */
void print_square(int n)
{
	int i = n, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i > 0)
		{
			j = n;

			while (j > 0)
			{
				_putchar('#');
				j--;
			}
				_putchar('\n');
			i--;
		}
	}
}
