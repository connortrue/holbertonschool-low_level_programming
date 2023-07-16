#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Description:
 * This function iterates through the list and frees each node. The head
 * pointer is set to NULL to indicate that the list is empty.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	/* iterate through the list and free each node */
	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
