#include <stdio.h>

/**
  *main - prints upper and lower case
  *Return: 0 (success)
  */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
