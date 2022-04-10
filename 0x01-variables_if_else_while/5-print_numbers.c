#include <stdio.h>

/**
 *main - prints 1-10
 *Return: 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
