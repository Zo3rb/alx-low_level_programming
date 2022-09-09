#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *  except (q and e).
 *
 *  Returen: Always O (Success)
 */

int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		if(ch == 'q' || ch =='e')
			continue;
		putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);
}
