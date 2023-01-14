#include<stdio.h>
int main()
{
  
  int guess = 0;
  int tries = 0;
  int num = 0;
  
  printf("Enter num: ");
  scanf("%d", &num);
  printf("Enter a guess: ");
  
  do
    {
      //this scanf recieves input from the user's guessing.
      scanf("%d", &guess);

      //condition that tests relationship between the number needed to guess and the number chosed by the user as guessing.
      if (guess < num)
      {
        printf("It is more!\n");
      }
      else if (guess > num)
      {
        printf("It is less!\n");
      }
      //calculates total of tries.
      tries++;
    }while (guess != num);
  
    printf("Number of tries needed:\n%d\n", tries);
  return 0;
}