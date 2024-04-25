#include <stdio.h>

int main()
{
  char input[] = {'{', '(', '2', '+', '3', ')', '*', '4', '}'};
  int length = sizeof(input) / sizeof(input[0]);

  for (int i = 0; i < length; i++)
  {
    switch (input[i])
    {
    case '(':
    case '{':
      printf("4\n");
      break;
    case ')':
    case '}':
      printf("5\n");
      break;
    case '+':
      printf("2\n");
      break;
    case '*':
      printf("3\n");
      break;
    default:
      if (input[i] >= '0' && input[i] <= '9')
        printf("6\n");
      break;
    }
  }
}