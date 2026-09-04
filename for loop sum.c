// Calculate the sum of 10 numbers using a for loop.
#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;

	printf("Enter 10 numbers:\n");
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &number);
		sum += number;
	}

	printf("Sum = %d\n", sum);
	return 0;
}
