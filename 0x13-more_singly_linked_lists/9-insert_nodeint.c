#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head
 * @idx: index where new node should be added
 * @n: value for new node
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *present, *previous;
	unsigned int counter;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	present = *head;
	previous = NULL;
	counter = 0;

	while (present != NULL && counter < idx)
	{
		previous = present;
		present = present->next;
		counter++;
	}

	if (counter == idx)
	{
		previous->next = new_node;
		new_node->next = present;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
