#include "lists.h"
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

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* Find the node before the index */
	current = *h;
	prev = NULL;
	while (i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (prev == NULL)
	{	/* Insert the new node at the beginning of the list */
		new_node->next = *h;
		*h = new_node;
	}
	else
	{	/* Insert the new node after the previous node */
		new_node->next = current;
		current->prev = new_node;
		prev->next = new_node;
		new_node->prev = prev;
	}

	/* Return the address of the new node */
	return (new_node);
}
