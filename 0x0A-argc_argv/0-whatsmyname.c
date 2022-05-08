#include <stdio.h>

/**
  *main - prints the name of the program
  *@argc: argument count
  *@argv: array of arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);
	return (0);
}
