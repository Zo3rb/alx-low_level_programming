#include "main.h"

/**
 * more_numbers - Entery point.
 *
 * Description: prints 10 times the numbers,
 * from 0 to 14,
 * followed by a new line.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i = 0, j, num;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				num = j % 10;
			}
			_putchar(num + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
