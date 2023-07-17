#include "lists.h"
/**
 * sum_listint - sums the elements in a linked list
 * @head: pointer to the head of the list
 *
 * Description:
 * This function iterates through the linked list and sums the elements. The
 * function returns the sum of the elements.
 *
 * Returns: the sum of the elements in the linked list
 */
int sum_listint(listint_t *head)
{
	size_t count = 0;
	int sum = 0;

	/* iterate through the list and sum the elements */
	while (head != NULL)
	{
		count++;
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
