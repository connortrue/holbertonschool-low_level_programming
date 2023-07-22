#include "lists.h"
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
