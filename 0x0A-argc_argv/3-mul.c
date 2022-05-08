#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
