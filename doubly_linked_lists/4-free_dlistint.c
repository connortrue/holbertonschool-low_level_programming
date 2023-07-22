#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	/* Declare two pointers to iterate through the list */
	dlistint_t *current = head;
	dlistint_t *next;

	/* Check if the list is empty */
	if (head == NULL)
		return;

	/* Iterate through the list, freeing each node in turn */
	while (current != NULL)
	{
		/* Save the next node in the list */
		next = current->next;

		/* Free the current node */
		free(current);

		/* Set the current node to the next node */
		current = next;
	}
}
