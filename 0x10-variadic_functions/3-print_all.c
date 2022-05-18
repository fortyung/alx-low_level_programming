#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s, op;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		op = format[i + 1];
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 1;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				j = 1;
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				j = 1;
				break;
		}
		if (j > 0 && (op == 'c' || op == 'i' || op == 'f' || op == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
