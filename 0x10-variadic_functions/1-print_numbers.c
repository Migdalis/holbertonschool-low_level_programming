#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers
 *@separator: String to be printed between numbers
 *@n: Number of int passed
 *@...: Optional parameters
 *Description: Function that prints numbers, followed by a new line
 *
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_numbers;

	va_start(list_numbers, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_numbers, int));
		if (i == (n - 1))
			break;
		printf("%s", separator);
	}
	va_end(list_numbers);

	printf("\n");
}
