#include "main.h"

/**
 *_strlen_rec - Calculate the length of a string
 *@s: String use
 *Description: Function that calculate the length of a string
 *Return: The length of the string
 *
 **/

int _strlen_rec(char *s)
{
	if (*s)
		return (1 + _strlen_rec(s + 1));
	return (0);
}
/**
 *is_pal - Test a string
 *@s: String to test
 *@len: Length of string
 *Description: Function that test if a string is palindrome or not
 *Return: 1 if a string is a palindrome and 0 if not
 *
 **/

int is_pal(char *s, char *c, int i)
{
	if ((*s == *c) && (i > 0))
		return (is_pal(s + 1, c - 1, i - 1));
	if ((*s == *c) && (i == 0))
		return (1);
	return (0);
}

/**
 *is_palindrome - Test a string
 *@s: String to test
 *Description: Function that test if a string is palindrome or not
 *Return: 1 if a string is a palindrome and 0 if not
 *
 **/

int is_palindrome(char *s)
{
	int i;

	i = _strlen_rec(s);
	return (is_pal(s, s + (i - 1), i / 2));
}
