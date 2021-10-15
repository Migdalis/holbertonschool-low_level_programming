#include "main.h"

/**
 *rot13 - Encode to rot13
 *@s: String to encode
 *Description: Function that encodes a string using rot13
 *Return: The string encoded
 **/

char *rot13(char *s)
{
	int i, j;
	char *alpha = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *code = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}
