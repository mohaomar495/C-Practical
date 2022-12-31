#include <stdio.h>

int main(void)
{
    int num_members = 0;
    int their_weight = 0;
    int total_weight_1 = 0, total_weight_2 = 0;
    int i = 0;

    printf("Enter the number of members of each team: ");
    scanf("%d", &num_members);

    printf("Enter their weight in one to one ratio: ");
    for (i = num_members * 2; i > 0; i--)
    {
        scanf("%d", &their_weight);
        if (i % 2 == 0)
        {
            total_weight_1 += their_weight;
        }
        else
        {
            total_weight_2 += their_weight;
        }
    }
    
    if (total_weight_1 > total_weight_2)
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n",total_weight_1);
        printf("Total weight for team 2: %d\n",total_weight_2);
    }
    else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n",total_weight_1);
        printf("Total weight for team 2: %d\n",total_weight_2);
    }
}