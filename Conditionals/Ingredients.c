#include <stdio.h>

int main()
{
	int array[10];
	int quantities = 0;
	int ID = 0;
	int i = 0;

	printf("Enter the quantities: \n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &quantities);
		array[ID] = quantities;
		ID += 1;
	}
	printf("Enter the ID: \n");
	scanf("%d", &ID);
	printf("%d\n", array[ID]);

	return 0;
}
