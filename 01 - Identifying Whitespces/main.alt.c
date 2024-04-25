#include <stdio.h>
#define MAXLINE 1000

int main()
{
  int spaces = 0;
  char current_char;

  while (current_char = getchar() != '\n')
    if (current_char == ' ')
      spaces++;

  printf("%d\n", spaces);
}