#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all nodes in a dlistint_t linked list.
 * @head: The head of the list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Check if the list is empty */
	if (head == NULL)
		return (sum);

	/* Iterate through the list adding up a sum, starting at the head */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	/* Return the sum */
	return (sum);
}

