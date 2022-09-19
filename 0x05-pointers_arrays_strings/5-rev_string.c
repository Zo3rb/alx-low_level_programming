/**
 * rev_string - Entry point
 *
 * Description: reverses a string.
 * @s: pointer to the string.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	/* Get The Lengh of s */
	int strL = 1;

	while (s[strL] != '\0')
	{
		strL++;
	}

	/* Create Temp String (Reversed) */
	char temp[strL];
	int i = 0;

	while (strL > 0)
	{
		temp[i] = s[strL];
		strL--;
		i++
	}

	/* Reassign */
	s = temp;
}
