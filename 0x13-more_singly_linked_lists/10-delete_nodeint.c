#include "lists.h"
#include <stddef.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer of head
 * @index: value to be assigned
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *previous;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	present = *head;
	previous = NULL;
	counter = 0;

	while (present != NULL && counter < index)
	{
		previous = present;
		present = present->next;
		counter++;
	}

	if (counter == index)
	{
		if (previous == NULL)
		{
			*head = present->next;
		}
		else
		{
			previous->next = present->next;
		}
		free(present);
		return (1);
	}
	else
		return (-1);
}

