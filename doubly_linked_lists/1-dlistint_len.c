#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * This function counts the number of nodes in the doubly linked list starting
 * from the provided head. It returns the total number of nodes in the list.
 *
 * Return: The number of nodes in the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
