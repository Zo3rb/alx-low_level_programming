/**
 * swap_int - swapping two int values of vars.
 * @a: the first pointer.
 * @b: the second pointer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a + *b;
	*b = c - *b;
	*a = c - *b;
}
