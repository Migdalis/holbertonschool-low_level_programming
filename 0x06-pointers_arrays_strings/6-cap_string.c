#include "main.h"

/**
 *is_separator - Compare a char
 *@c: Char to compare
 *Description: Function that compare a char to know if a separator
 *Return: 1 if is a separator or 0 to other case
 **/

int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';'
	|| c == '.' || c == '!' || c == '?' || c == '"' || c == '('
	|| c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 *cap_string - Capitalizes words
 *@s: String to change
 *Description: Function that capitalizes all words of a string
 *Return: The string modified
 **/

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (is_separator(s[i]) && (s[i + 1] > 96 && s[i + 1] < 123))
			s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);
}
