#include<stdio.h>

int string_length(char s[100]);

int main()
{
  char Name[100];
  printf("Hey!, Please enter your message to get the length: ");
  scanf("%s", Name);
  int length = string_length(Name);
  //printf("Length of string is %d\n", string_length(sms));
  if (length % 2 == 0)
  {
    printf("1\n");
  }
  else
  {
    printf("2\n");
  }
  return 0;
}

int string_length(char s[100])
{
  int length = 0;
  while (s[length] != '\0')
    {
      length++;
    }
  return length;
}