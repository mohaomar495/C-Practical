#include <stdio.h>

int main()
{
	int Dice1 = 0, Dice2 = 0;
	int sum = 0;
	int special_tax = 36;
	
	scanf("%d\n%d", &Dice1, &Dice2);
	sum = Dice1 + Dice2;

	if (sum >= 10)
	{
		sum = special_tax;
		printf("Special tax\n");
	}
	else
	{
		sum *= 2;
		printf("Regular tax\n");
	}
	printf("%d\n", sum);

	return 0;
}
