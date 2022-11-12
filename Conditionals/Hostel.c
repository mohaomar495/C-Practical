#include <stdio.h>

int main()
{
	// read number of hours past noon of your arrival.
	int hour = 0;
	// price is 10$ and 5$ are added for every hour after noon.
	int price = 10;
	// Finally total is capped 53 dollars, so you'll never have to pay more than that.
	int total = 0;

	scanf("%d", &hour);

	if (hour > 0)
	{
		price += hour * 5;
		total = price;
	}
	else if (hour == 0)
	{
		total = price;
	}

	if (price > 53)
	{
		printf("53\n");
	}
	else
	{
		printf("%d\n", total);
	}

	return 0;
}
