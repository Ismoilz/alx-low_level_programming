#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 *
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: The address of the nth node or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	head = head->next;

	return (head);
}
