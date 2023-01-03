#include <stdio.h>

int main()
{
	int height = 0;
	int number_leaflets = 0;

	scanf("%d\n%d", &height, &number_leaflets);

	if ((height <= 5) && (number_leaflets >= 8))
	{
		printf("Tinuviel\n");
	}
	else if ((height >= 10) && (number_leaflets >= 10))
	{
		printf("Calaelen\n");
	}
	else if ((height <= 8) && (number_leaflets <= 5))
	{
		printf("Falarion\n");
	}
	else if ((height >= 12) && (number_leaflets <= 7))
	{
		printf("Dorthonion\n");
	}
	else
	{
		printf("Uncertain\n");
	}

	return 0;
}
