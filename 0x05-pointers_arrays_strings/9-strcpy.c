#include "main.h"
/**
 *_strcpy - copies the string pointed to by src
 *@dest: A pointer to a char that will be changed
 *@src: A pointer to a char that will be changed
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, b;

	for (i = 0; src[i]; i++)

	for (b = 0; b <= i; b++)
		dest[b] = src[b];
	return (dest);
}
