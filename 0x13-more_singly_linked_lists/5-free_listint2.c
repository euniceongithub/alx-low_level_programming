#include "lists.h"
#include <stddef.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *present, *next_node;

	present = *head;

	while (present != NULL)
	{
		next_node = present->next;
		free(present);
		present = next_node;
	}

	*head = NULL;
}
