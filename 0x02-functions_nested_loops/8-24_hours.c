#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day of Jack Bauer,
 * starting from "00:00" to "23:59".
 *
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int hr = 0, min;

	while (hr <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
