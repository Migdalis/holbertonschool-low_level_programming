#include "3-calc.h"

/**
 *op_add - Add two integer
 *@a: First term
 *@b: Second term
 *
 * Return: The sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Sub two integer
 *@a: First term
 *@b: Second term
 *
 * Return: The difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Mult two integer
 *@a: First term
 *@b: Second term
 *
 * Return: The product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Div two integer
 *@a: First term
 *@b: Second term
 *
 * Return: The division of a by b
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Mod two integer
 *@a: First term
 *@b: Second term
 *
 * Return: The remainder of the division of a by b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
