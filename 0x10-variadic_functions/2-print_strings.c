#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_strings - Prints strings
 *@separator: String to be printed between strings
 *@n: Number of strings passed
 *@...: Optional parameters
 *Description: Function that prints strings, followed by a new line
 *
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *aux;
va_list list_strings;
va_start(list_strings, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
aux = va_arg(list_strings, char *);
if (!aux)
printf("(nil)");
else
printf("%s", aux);
if (i == (n - 1))
break;
printf("%s", separator);
}
va_end(list_strings);

printf("\n");
}
