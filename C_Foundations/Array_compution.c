#include <stdio.h>

int main(void)
{
	int ingredients = 0;
	double price_per_pound[10];
	double weight_per_pound[10];
	double total_cost = 0;

	printf("Ingredients: ");
	scanf("%d", &ingredients);

	printf("Price per pound: ");

	for (int i = 0; i < ingredients; i++)
	{
		scanf("%lf", &price_per_pound[i]);
	}

	printf("Weight per pound: ");

	for (int i = 0; i < ingredients; i++)
	{
		scanf("%lf", &weight_per_pound[i]);
	}

	printf("Total cost: ");

	for (int i = 0; i < ingredients; i++)
	{
		total_cost += weight_per_pound[i] * price_per_pound[i];
	}

	printf("%lf\n", total_cost);
}
