#include <stdio.h>

int main()
{
	int passengers = 0;
	float gasCost = 0;
	float totalCost = 0;

	scanf("%d", &passengers);
	scanf("%f", &gasCost);

	if (passengers == 0)
	{
		totalCost = gasCost;
	}
	else
	{
		totalCost = (gasCost + 1) / (passengers + 1);
	}
	printf("%.2f\n", totalCost);

	return 0;
}
