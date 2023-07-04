#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: pointer to head node
 *
 * description: Print the present node, increase the counter and point to the
 * next one and repeat the same thing with it, unliss it's NULL
 * 
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
        size_t count;

        count = 0;
        while (h != NULL)
        {
                printf("%i\n", h->n);

                count++;

                h = h->next;
        }

        return (count);
}
