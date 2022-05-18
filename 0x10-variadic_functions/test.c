#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_int - prints int
  *@va_list: ap
  */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
  *print_float - prints float
  *@va_list: ap
  */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
  *print_char - prints char
  *@va_list: ap
  */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *print_chrr - prints string
 *@va_list: ap
 */
void print_chrr(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nill)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print all inputs
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";

	printTypeStruct choice[] = { {'c', print_char},
		 	      {'i', print_int},
	    		      {'f', print_float},
		 	      {'s', print_chrr},
			      {'\0', NULL} };

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{

		while (choice[j].letter != '\0')
		{
			if (*choice[j].letter == format[i])
			{
				printf("%s", separator);
				choice[j].func(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
