#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: pointer to the head of the list
 *
 * Description:
 * This function checks if the linked list is empty. If the linked list is
 * empty, the function returns 0. Otherwise, the function saves the head node's
 * data and the address of the next node. The function then frees the head node
 * and updates the head pointer. Finally, the function returns the head node's
 * data.
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* check if the linked list is empty */
	if (*head == NULL)
		return (0);

	/* save the head node's data */
	n = (*head)->data;

	/* save the address of the next node */
	temp = (*head)->next;

	/* free the head node */
	free(*head);

	/* update the head pointer */
	*head = temp;

	return (n);
}
