#include "_putchar.c"

int _putchar(char c);

/**
 *main - Prints alphabet
 *Description: Function for prints alphabet
 *Return: 0 to success
 *
 *Display alphabet on screen
 **/

void print_alphabet(void)
{
  int i;
  for (i = 97; i < 123; i++)
    {
    _putchar(i);
    }
 _putchar(10);
}
