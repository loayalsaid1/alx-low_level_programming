/**
 * this is part of pree code camp vid "Understaing sorting algorimthms"
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[20];
	int n = 20;
	int value, i, j, temp;
	int upper_bound = 10000, lower_bound = 0;

	for (i = 0; i < n; i++)
	{
		value = rand() % (upper_bound - lower_bound + 1)\
			+ lower_bound;
		arr[i] = value;
	}

	for (i = 0; i < n; i++)
	{
		printf("%i ", arr[i]);
	}
	putchar('\n');



	// sortin the array
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j< n; j++)
		{
			if (arr[j] < arr[i])
			{
				//swap
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	

	for (i = 0; i < n; i++)
	{
		printf("%i ", arr[i]);
	}
	putchar('\n');


	return (0);
}
