#include "lists.h"
dd_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: the data to be stored in the new node
 *
 * Description:
 * This function allocates memory for a new node and initializes it with the
 * given data. The new node is then added to the end of the list.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty, new node is the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* traverse the list to the end */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* add new node to the end of the list */
	current->next = new_node;

	return (new_node);
}


