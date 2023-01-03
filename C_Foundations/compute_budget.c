#include <stdio.h>

int main(void)
{
    int sequence_numb = 0;
    int sum = 0;

    printf("sequence numbers: ");
    while (-1)
    {
        scanf("%d", &sequence_numb);
        if (sequence_numb == -1)
        {
            break;
        }
        else
        {
            sum += sequence_numb;
        }
    }
    printf("the sum: %d\n", sum);
}