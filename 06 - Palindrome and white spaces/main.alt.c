#include <stdio.h>

int remove_spaces(char *input)
{
  int index = 0;
  int i = 0;
  while (input[i])
  {
    if (input[i] == ' ')
    {
      i++;
      continue;
    }

    input[index++] = input[i++];
  }

  input[index] = '\0';
  return index;
}

int main()
{
  char input[100];
  scanf("%[^\n]", input);

  int new_length = remove_spaces(input);

  for (int i = 0; i < new_length / 2; i++)
  {
    if (input[i] != input[new_length - i - 1])
    {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
}