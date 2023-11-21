#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to node
 * @index: index of node
 *
 * Return: nth node of a listint_t linked list or NULL if non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *present;

	counter = 0;
	present = head;

	while (present != NULL)
	{
		if (counter == index)
		{
			return (present);
		}

		present = present->next;
		counter++;
	}
	return (NULL);
}
