/**
 * this is part of pree code camp vid "Understaing sorting algorimthms"
 * 
 * This is selection sort
 */
#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size);
int locate_smallest(int arr[], int current_index, int size);
void swap(int arr[], int index_x, int index_y);
void selection_sort(int arr[], int size);



int main(void)
{
	int arr[] = {3, 4325, 112, 2350, 84, 9020, 22, 45,92, 398047, 109874};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, size);
	selection_sort(arr, size);
	print_array(arr, size);

	return (0);
}



void print_array(int arr[], int size)
{
	int i;
	
    i = 0;
    while (arr && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", arr[i]);
        ++i;
    }
    printf("\n");
}

int locate_smallest(int arr[], int current_index, int size)
{
	int temp_index = current_index;
	int j;

	for (j = temp_index; j < size; j++)
	{
		if (arr[j] < arr[temp_index])
		{
			temp_index = j;
		}
	}

	return (temp_index);
}

void swap(int arr[], int index_x, int index_y)
{
	int temp = arr[index_x];
	arr[index_x] = arr[index_y];
	arr[index_y] = temp;
}

void selection_sort(int arr[], int size)
{
	int i = 0;
	int temp_index;

	while (i < size-1)
	{
		temp_index = locate_smallest(arr, i, size);
		if (temp_index != i)
			swap(arr, i, temp_index);
		i++;
	}
}
