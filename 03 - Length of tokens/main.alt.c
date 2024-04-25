#include <stdio.h>

int main()
{
  int tokens = 0;

  char last_char = ' ';
  char current_char;
  char current_token_length = 0;

  while ((current_char = getchar()))
  {
    if (last_char != ' ' && (current_char == ' ' || current_char == '\n'))
    {
      tokens++;

      printf("%d ", current_token_length);
      current_token_length = 0;
    }
    else if (current_char != ' ')
    {
      current_token_length++;
    }

    if (current_char == '\n')
      break;

    last_char = current_char;
  }

  printf("\n%d\n", tokens);
}
