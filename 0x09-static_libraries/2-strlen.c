#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to be processed
 *
 * ********** IMPORTANT NOTE: I THOUGH IT MAY
 * BE MORE BETTER IF I USE A COUNTER VARIABLE
 * BUT IT TURNED OUT THAT NO!
 *
 *
 * one more edit: i will change the i to make it
 * named counter, to have a middle ground
 * and make it more readable
 *
 * Return: lenth of string
 */
int _strlen(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	return (counter);
}
