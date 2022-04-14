#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
