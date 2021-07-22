#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - Prints a name
 *@name: Name to print
 *@f: Pointer to Function
 *Description: Function that prints a name
 *
 **/

void print_name(char *name, void (*f)(char *))
{
void (*fun_point)(char *) = f;
if (name != NULL)
fun_point(name);
}
