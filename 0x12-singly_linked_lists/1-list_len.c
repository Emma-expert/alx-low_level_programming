#include "lists.h"

/**
 * list_len - finds the number of elemets in a given list_t list.
 * @h: the linked list_t list.
 * Return: teh element in list h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
