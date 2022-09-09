#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description:  print whether the number stored
 * in the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n < 0)
        {
                printf("%i is negative\n", n);
        }
        else if (n == 0)
        {
                printf("%i is zero\n", n);
        }
        else
        {
                printf("%i is positive\n", n);
        }
        return (0);
}
