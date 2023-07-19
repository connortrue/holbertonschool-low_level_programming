#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* number of nodes */

	while (h) /* iterate through the list */
	{
		h = h->next; /* move to the next node */
		count++; /* increment the node count */
	}

	return (count); /* return the number of nodes */
}
