#include "main.h"

/**
 * print_rev - entery point.
 *
 * Description: prints a string, in reverse, followed by a new line.
 * @s: string to reverse.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
