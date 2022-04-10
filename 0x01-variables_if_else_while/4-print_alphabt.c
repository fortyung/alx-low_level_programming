#include <stdio.h>

/**
 *main - prints a-z expect q and e
 *Return: 0 (success)
 */

int main(void)
{
	char cl;

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		if (cl == 'q' || cl == 'e')
		{
			continue;
		}
		putchar(cl);
	}
	putchar('\n');
	return (0);
}
