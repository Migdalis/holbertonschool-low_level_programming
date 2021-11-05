#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_all - Prints anything
 *@format: List of types of arguments passed to the function
 *@...: Optional parameters
 *
 **/

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *aux = "";
	va_list list_arg;

	va_start(list_arg, format);
	i = 0;
	while (format[i])
	{
		printf("%s", aux);
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list_arg, int));
				aux = ", ";
				break;
			case 'i':
				printf("%i", va_arg(list_arg, int));
				aux = ", ";
				break;
			case 'f':
				printf("%f", va_arg(list_arg, double));
				aux = ", ";
				break;
			case 's':
				aux = va_arg(list_arg, char*);
				if (!aux)
					aux = "(nil)";
				printf("%s", aux);
				aux = ", ";
				break;
			default:
				aux = "";
		}
		i++;
	}
	printf("\n");
}
