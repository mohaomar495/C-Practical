#include <stdio.h>

int main()
{
    int min  = 0, max = 0;
    int temperature = 0;
    scanf("%d %d", &min, &max);
    while (temperature != -999)
    {
        scanf("%d", &temperature);
        if (temperature >= min && temperature <= max)
        {
            printf("Nothing to report!\n");
        }
        else
        {
            printf("Alert!\n");
            break;
        }
    }
    return 0;
}