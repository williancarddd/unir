#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;
#define max_name 50
#define max_sup 5

int main()
{
  char name[max_name];
  char bidimensional_name[max_sup][max_name] = {};
  int i = 0, j = 0;
  gets(name);

  while (name[i] != '\0')
  {
    if (name[i] == ' ')
    {
      j++;
    }
    else
    {
      bidimensional_name[j][i] = name[i];
    }
    i++;
  }
  bidimensional_name[j][i] = '\0';
  printf("%c\n", bidimensional_name[1][0]);
  return 0;
}