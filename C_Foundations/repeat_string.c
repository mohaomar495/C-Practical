#include <stdio.h>

int main()
{
  int num_repeatition = 0;
  char string[50];
  scanf("%d %s", &num_repeatition, string);
  for (int i = 0; i < num_repeatition; i++)
    {
      printf("%s\n", string);
    }
  return 0;
}