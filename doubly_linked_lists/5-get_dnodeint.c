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

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: The head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	/* Check if the index is out of bounds */
	if (index >= dlistint_len(head))
		return (NULL);

	/* Iterate through the list, starting at the head */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Return the current node if the index is found */
	if (current)
		return (current);

	/* Return NULL if the index is not found */
	return (NULL);
}
