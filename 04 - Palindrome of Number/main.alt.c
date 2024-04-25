#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
  int number;
  scanf("%d", &number);

  char number_string[MAX_LENGTH];
  sprintf(number_string, "%d", number);

  int length = strlen(number_string);
  for (int i = 0; i < length / 2; i++)
  {
    if (number_string[i] != number_string[length - i - 1])
    {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
}
