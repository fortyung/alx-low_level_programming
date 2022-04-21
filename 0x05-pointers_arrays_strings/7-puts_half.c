#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void puts_half(char *str)
{
	int i, b;

	for (i = 0; str[i]; i++)
	if (i % 2 != 0)
		b = (i / 2) + 1;
	else
		b = i / 2;
	while (b < i)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}



