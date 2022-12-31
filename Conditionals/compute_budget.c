#include <stdio.h>

int main(void)
{
    int sequence_numb = 0;
    int sum = 0;

    printf("sequence numbers: ");
    scanf("%d", &sequence_numb);
    while (sequence_numb != -1)
    {
        scanf("%d", &sequence_numb);
        sum += sequence_numb;
    }
    printf("the sum: %d\n", sum+1);
}