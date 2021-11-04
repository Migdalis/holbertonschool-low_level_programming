#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Sum all parameters
 *@n: First parameter
 *@...: Optional parameters
 *Description: Function returns the sum of all its parameters
 *Return: The sum of all its parameters
 *
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_point_list;

	va_start(arg_point_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_point_list, int);

	va_end(arg_point_list);

	return (sum);
}
