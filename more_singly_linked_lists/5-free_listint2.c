#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer of the list
 *
 * Description:
 * This function iterates through the list and frees each node. The head
 * pointer is set to NULL to indicate that the list is empty.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	/* iterate through the list and free each node */
	while (*head != NULL)
	{
		current = *head;
		*head = current->next;

		free(current);
	}

	/* set head to NULL to indicate that the list is empty */
	*head = NULL;
}
