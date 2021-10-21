#include "main.h"

/**
 *is_prime - Test a number prime
 *@n: Number to test
 *@div: Number divider
 *Description: Function that test if a number is prime or not
 *Return: The sum of n's divisors
 *
 **/

int is_prime(int n, int div)
{
	if ((n % div == 0) && n > div)
		return (1 + is_prime(n, div + 1));
	if ((n % div == 0) && n == div)
		return (1);
	return (is_prime(n, div + 1));
}

/**
 *is_prime_number - Test a number prime
 *@n: Number to test
 *Description: Function that test if a number is prime or not
 *Return: 1 if the input integer is a prime number, otherwise 0
 *
 **/

int is_prime_number(int n)
{
	if ((n > 0) && (is_prime(n, 1) == 2))
		return (1);
	return (0);
}
