#include "main.h"

/**
  *_strlen -  returns the length of a string.
  *@s: S pointer that will be updated
  *Return: 0
  */

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;
	return (k);
}
