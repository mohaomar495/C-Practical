#include<stdio.h>

int string_length(char s[100]);

int main()
{
  char sms[100];
  printf("Hey!, Please enter your message to get the length: ");
  scanf("%s", sms);
  
  printf("Length of string is %d\n", string_length(sms));
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