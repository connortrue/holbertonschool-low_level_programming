#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: the data to be stored in the new node
 *
 * Description:
 * This function allocates memory for a new node and initializes it with the
 * given data. The new node is then added to the beginning of the list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize new node */
	new_node->n = n;
	new_node->next = *head;

	/* point head to new node */
	*head = new_node;

	return (new_node);
}
