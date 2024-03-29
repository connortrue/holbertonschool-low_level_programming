#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i = 0;

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* if index is 0, insert at beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* find position to insert */
	while (i < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}

	/* insert new node */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
