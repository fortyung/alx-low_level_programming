#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strs;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 1; i <= n; i++)
		{
			strs = va_arg(ap, char *);

			if (strs == NULL)
				printf("(nil)");
			else
				printf("%s", strs);

			if (separator != NULL && i != n)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
