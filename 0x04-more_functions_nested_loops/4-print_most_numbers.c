#include "main.h"

/**
 * print_most_numbers - Entery point.
 *
 * Description: prints the numbers,
 * from 0 to 9, followed by a new line,
 * Do not print 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
