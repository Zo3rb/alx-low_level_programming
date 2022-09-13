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
	int lastNumber;

	n = n >= 0 ? n : n * -1;
	lastNumber = n % 10;
	_putchar(lastNumber + '0');

	return (lastNumber);
}
