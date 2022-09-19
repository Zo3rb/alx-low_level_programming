#include "main.h"

/**
 * puts_half - print second half of a string.
 *
 * @str: char array string type.
 *
 * Description: If odd number of chars, print (length - 1) / 2.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	i += 1;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
