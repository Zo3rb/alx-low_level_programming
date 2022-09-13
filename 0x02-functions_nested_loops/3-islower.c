#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character.
 * @c: character's binary code (number).
 *
 * Return: 1 if C is lower and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
