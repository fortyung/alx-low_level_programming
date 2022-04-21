#include "main.h"

/**
 *puts2 - print every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
