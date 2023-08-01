#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data in a listint_t list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data in the list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}

