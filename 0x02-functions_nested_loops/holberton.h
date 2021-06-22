#include <string.h>
/**
 *Function to print a word on screen
 */

int printofword (char word[])
{
  long unsigned int i;
  for (i = 0; i < strlen(word); i++){
    putchar(word[i]);
  }
  return (0);
}
