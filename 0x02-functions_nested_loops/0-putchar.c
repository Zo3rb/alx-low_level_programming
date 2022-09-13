#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c[8] = "putchar";
	int i = 0;

	_putchar('_');
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
