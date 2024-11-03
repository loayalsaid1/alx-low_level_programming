#include <stdio.h>
#include <stdlib.h>


void print_array(int arr[], int size);





void print_array(int arr[], int size)
{
    int d = 8;
    int arrd[d];
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
