#include <stdio.h>

/**
  *main - prints z-a
  *Return: 0
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);

}
