#include "putchar.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c[9] = "putchar";
	int i = 0;

	while(i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
