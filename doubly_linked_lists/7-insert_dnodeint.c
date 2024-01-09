#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specific index.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be inserted.
 * @n: The integer value to store in the new node.
 *
 * Description: Inserts a new node at a given position in a doubly linked list.
 *              If the list is empty or the index is 0, the new node is added
 *              at the beginning. If the index is beyond the list's end, the
 *              function fails. The function traverses the list to the desired
 *              position and adjusts the pointers accordingly.
 *
 * Return: Pointer to the new node, or NULL if the function fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node's data */
	new_node->n = n;

	/* Insert at the beginning if the list is empty or idx is 0 */
	if (*h == NULL || idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	/* Traverse the list to find the insertion point */
	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* Return NULL if idx is out of bounds */
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the found position */
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
