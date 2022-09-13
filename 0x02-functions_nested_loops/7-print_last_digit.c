#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of a number.
 * @n: The number to check.
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
