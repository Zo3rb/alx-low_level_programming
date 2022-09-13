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
	n = n >= 0 ? n : n * -1;

	return (_putchar('0' + (n % 10)));
}
