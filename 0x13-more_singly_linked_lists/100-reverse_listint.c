#include "lists.h"
#include <stddef.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer for head
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *present, *next_node;

	previous = NULL;
	present = *head;

	while (present != NULL)
	{
		next_node = present->next;
		present->next = previous;
		previous = present;
		present = next_node;
	}

	*head = previous;
	return (*head);
}


