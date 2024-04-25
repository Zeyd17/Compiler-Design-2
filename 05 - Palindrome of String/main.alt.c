#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
  char input[MAX_LENGTH];
  scanf("%s", input);

  int length = strlen(input);
  for (int i = 0; i < length / 2; i++)
  {
    if (input[i] != input[length - i - 1])
    {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
}
