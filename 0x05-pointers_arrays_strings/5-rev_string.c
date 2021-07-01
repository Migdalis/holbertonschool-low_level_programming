#include "holberton.h"

/**
 *rev_string - Reverse a string
 *@s: Pointer to string
 *Description: Function for reverse a string
 *Return: void
 *
 **/

void rev_string(char *s)
{
int i;
int j;
char temp;

i = 0;
while (*(s + i) != '\0')
{
i++;
}

j = i - 1;
i = 0;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;

i++;
j--;
}

}
