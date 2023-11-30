#include "lists.h"

/**
 * list_len - Computes the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * This function calculates and returns the number of elements in the linked 1
 * list by iterating through the nodes until reaching the end.
 *
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
