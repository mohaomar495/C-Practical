#include <stdio.h>

int main()
{
	int Num_cars = 0;
	double car_weight = 0;
	int cars[50];
	int i = 0;
	// calculate the average of the the total weight so that u can gues the limit.
	double average_weight;

	scanf("%d", &Num_cars);

	printf("Enter weight of cars: \n");

	for (i = 0; i < Num_cars; i++)
	{
		// This line of code takes each time a weight of car.
		scanf("%d", &cars[i]);
		car_weight += cars[i];
	}
	
	printf("This is the total weoght of all the cars: %.1.1lf\n", car_weight);

	average_weight = car_weight / Num_cars;
	printf("These are things to add or subtract from the average.\n");
	for (i = 0; i < Num_cars; i++)
	{
		// this allows us to get what to add or subtract from the average weight.
		double weight_add_or_subtract = average_weight - cars[i];
		printf("%.1lf\n", weight_add_or_subtract);
	}

	return 0;
}
