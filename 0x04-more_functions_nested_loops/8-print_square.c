#include "main.h"

/**
 * print_square - check for a digit
 * @size : number of _ to be printed
 * Return:void
 */
void print_square(int size)
{
	int i = size, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i > 0)
		{
			j = size;

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
