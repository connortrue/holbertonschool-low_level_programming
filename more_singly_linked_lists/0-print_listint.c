#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* iterate through the list */
	while (h != NULL)
	{
		/* print data of current node */
		printf("%d\n", h->n);

		/* move to next node */
		h = h->next;

		/* increment node counter */
		count++;
	}

	return (count);
}
