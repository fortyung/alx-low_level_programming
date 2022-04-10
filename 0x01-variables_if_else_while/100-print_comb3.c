#include <stdio.h>
/**
  *main - prints 01 - 98
  *Return: 0
  */

int main (void) 
{
	int zeros;
	int ones;

	for (zeros = 0; zeros < 9; zeros++)
	{
		for (ones = zeros + 1; ones < 10; ones++)
		{
			putchar((zeros % 10) + '0');
			putchar((ones % 10) + '0');

			if (zeros == 8 && ones == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
