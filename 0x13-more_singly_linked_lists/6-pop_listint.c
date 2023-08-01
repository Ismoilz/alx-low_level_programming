#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 *
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: The data stored in the deleted node.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
