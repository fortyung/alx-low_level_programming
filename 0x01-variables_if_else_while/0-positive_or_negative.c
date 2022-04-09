#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *This program will assign a random number 
 *to the variable n each time it is executed. 
 *iComplete the source code in order to print whether 
 *the number stored in the variable n is positive or negative 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
