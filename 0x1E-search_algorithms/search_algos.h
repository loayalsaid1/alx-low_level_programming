#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;


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
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /*SEARCH_ALGO_H*/
