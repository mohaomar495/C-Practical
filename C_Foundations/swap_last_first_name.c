#include <stdio.h>

int main()
{
  int num = 0;
  char first_name[50], last_name[50];
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
    {
      scanf("%s %s", first_name, last_name);
      printf("\n%s %s\n", last_name, first_name);
    }

  return 0;
}