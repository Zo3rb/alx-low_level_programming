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
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
