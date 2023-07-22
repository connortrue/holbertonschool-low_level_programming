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
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 *  dlistint_t linked list.
 * @h: The head of the list.
 * @idx: The index of the list where the new node should be added. Index starts
 *  at 0.
 * @n: The data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *prev;
	unsigned int i = 0;

	if (idx > dlistint_len(*h))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	current = *h;
	prev = NULL;
	while (i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (prev == NULL)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		current->prev = new_node;
		prev->next = new_node;
		new_node->prev = prev;
	}

	return (new_node);
}
