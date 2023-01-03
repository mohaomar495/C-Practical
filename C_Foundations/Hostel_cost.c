#include <stdio.h>

int main()
{
	int age = 0;
	int luggage = 0;
	int total = 0;

	scanf("%d\n%d", &age, &luggage);

	if (age == 60)
	{
		printf("You don't need to pay anything\n");
	}
	else if (age < 10)
	{
		total += 5;
	}
	else
	{
		total += 30;
		if (luggage > 20)
		{
			total += 10;
		}
	}
	printf("%d\n", total);

	return 0;
}

