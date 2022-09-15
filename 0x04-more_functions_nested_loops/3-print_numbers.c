#include "main.h"

/**
 * print_numbers - Entery point.
 *
 * Description: prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
