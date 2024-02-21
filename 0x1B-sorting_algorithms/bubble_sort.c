/**
 * A part of geeks for geeks tutorial
*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size);
void swap(int arr[], int index_x, int index_y);
void bubble_sort(int arr[], int size);

int main(void)
{
	int arr[] = {3, 4325, 112, 2350, 84, 9020, 22, 45,92, 398047, 109874};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, size);
	bubble_sort(arr, size);
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


void swap(int arr[], int index_x, int index_y)
{
	int temp = arr[index_x];
	arr[index_x] = arr[index_y];
	arr[index_y] = temp;
}


void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int swaps = 0;
        for (int j = 0; j < size-1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr, j, j+1);
                swaps++;
            }
        }
        if (swaps == 0)
            break;
    }
}
