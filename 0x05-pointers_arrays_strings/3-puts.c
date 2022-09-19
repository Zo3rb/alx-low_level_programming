#include "main.h"

/**
 * _puts - entry point.
 *
 * Description:  prints a string,
 * followed by a new line, to stdout.
 * @str: Pointer to the string;
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
