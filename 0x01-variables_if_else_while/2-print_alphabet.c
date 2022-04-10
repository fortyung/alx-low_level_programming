#include <stdio.h>
/**
 *main - main block
 *Return: 0 (Success)
 */

int main(void)
{

	char h = 'a';

	while (h <= 'z')
	{
		putchar(h);
		h++;
	}

	putchar('\n');

	return (0);

}
