#include <stdio.h>

int main()
{
  int tokens = 0;

  char last_char = ' ';
  char current_char;

  while ((current_char = getchar()))
  {
    if (last_char != ' ' && (current_char == ' ' || current_char == '\n'))
      tokens++;

    if (current_char == '\n')
      break;

    last_char = current_char;
  }

  printf("%d\n", tokens);
}