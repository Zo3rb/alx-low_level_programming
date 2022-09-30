/**
 * _strlen - Entry point.
 *
 * Description: returns the length of a string.
 * @s: Pointer to the String.
 *
 * Return: (int) - String Length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
