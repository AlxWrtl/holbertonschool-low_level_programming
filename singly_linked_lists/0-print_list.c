#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * This function prints the elements of the linked list, displaying the length
 * of each string and the string itself. If a string is NULL, "(nil)" is printed
 * in its place. The total number of elements in the list is returned.
 *
 * Return: The number of elements in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
