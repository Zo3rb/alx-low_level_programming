#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: checks for alphabetic character.
 * @c: the number to check.
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 65 || c <= 90) || (c >= 97 || c <= 122));
}
