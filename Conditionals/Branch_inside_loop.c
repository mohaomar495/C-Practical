#include <stdio.h>

int main(void)
{
  int numb_cities = 0;
  int numb_big_cities = 0;
  int population_per_city = 0;
  int i = 0;

  scanf("%d", &numb_cities);

  while (i < numb_cities)
    {
      scanf("%d", &population_per_city);
      if (population_per_city > 10000)
      {
        numb_big_cities += 1;
      }
      i++;
    }
  printf("%d\n", numb_big_cities);
}

/*
TEST:
6
1000
5000
15000
4780
0
23590
OUTPUT:
2
*/