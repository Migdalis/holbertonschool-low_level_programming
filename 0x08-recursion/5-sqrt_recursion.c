#include "main.h"

/**
 *search_root - Square root of a number
 *@raiz: Number to find square root
 *@limit_sup: Acortar busqueda en el rango
 *@limit_inf: Acortar busqueda en el rango
 *Description: Function that find the natural square root of a number
 *Return: A integer to square root, -1 if not have a natural square
 *
 **/
int search_root(int raiz, int limit_sup, int limit_inf)
{
	int temp;

	temp = (limit_sup + limit_inf) / 2;

	if ((temp * temp) == raiz)
	{
		return (temp);
	}
	else
	{
		if ((temp * temp) > raiz)
		{
			return (search_root(raiz, temp, limit_inf));
		}
		else
		{
			if (temp == limit_inf)
				return (-1);
			return (search_root(raiz, limit_sup, temp));
		}
	}
}

/**
 *_sqrt_recursion - Square root of a number
 *@n: Number to find square root
 *Description: Function that find the natural square root of a number
 *Return: A integer to square root, -1 if not have a natural square
 *
 **/
int _sqrt_recursion(int n)
{
	if ((n > 0) & (n != 1))
		return (search_root(n, n, 0));
	if (n < 0)
		return (-1);
	else
		return ((n == 0) ? 0 : 1);
}
