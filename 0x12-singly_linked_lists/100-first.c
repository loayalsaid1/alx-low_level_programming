#include "lists.h"

/**
 * first - executes a function before main
 */
void __attribute__((__constructor__))first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}