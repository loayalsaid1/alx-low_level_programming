#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, size_t left, size_t right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int sub_array_binary_search(int *array, int value,
	size_t left, size_t right);
int recursive_binary_search(int *array, int value, size_t left,
	size_t right);
int advanced_binary(int *array, size_t size, int value);

#endif /*SEARCH_ALGO_H*/
