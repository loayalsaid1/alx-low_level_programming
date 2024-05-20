#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, size_t left, size_t right);

#endif /*SEARCH_ALGO_H*/
