#include <stdio.h>

int main(void)
{
    int population = 0;
    int day = 1;
    int infected_individuals = 1;

    printf("Enter the population size: ");
    scanf("%d", &population);

    while (infected_individuals < population)
    {
        day++;
        infected_individuals *= 3;
    }
    printf("Day where the entire population is infected is %d\n", day);
}