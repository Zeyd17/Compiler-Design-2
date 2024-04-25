#include <stdio.h>
#include <string.h>

int main()
{
  char string[] = "My name is John Doe";
  int length = strlen(string);

  char substring[] = "John";
  int substring_length = strlen(substring);

  for (int i = 0; i <= length - substring_length; i++)
    for (int j = 0; j < substring_length && string[i + j] == substring[j]; j++)
    {
      if (j == substring_length - 1)
      {
        printf("The substring is present in the parent string\n");
        return 0;
      }
    }
}