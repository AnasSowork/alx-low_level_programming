#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *This program assign a random number to the variable and cheks if it is positive or negative.
 *And display the results.
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
					printf("%d is positive\n", n);
				else if (n == 0)
					printf("%d is zero\n", n);
				else
					printf("%d is negative\n", n);
				return (0);
}
