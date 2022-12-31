#include <stdio.h>

int main(void)
{
    int numb_stars = 0;
    int row = 0;
    int colunm = 0;

    scanf("%d", &numb_stars);
    for (row = 0; row < numb_stars; row++)
    {
        for (colunm = 0; colunm < numb_stars; colunm++)
        {
            printf("*");
        }
        printf("\n");
    }
}