#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; /* number of nodes */

    while (h) /* iterate through the list */
    {
        printf("%d\n", h->n); /* print the node's data */
        h = h->next; /* move to the next node */
        count++; /* increment the node count */
    }

    return (count); /* return the number of nodes */
}
