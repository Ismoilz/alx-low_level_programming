#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: list elements counter
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
