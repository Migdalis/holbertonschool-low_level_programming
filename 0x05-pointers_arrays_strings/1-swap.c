#include "holberton.h"

/**
 *swap_int - Swap two integers
 *@a: Integer to swap
 *@b: Integer to swap
 *Description: Function for swap the value of two integers
 *
 **/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
