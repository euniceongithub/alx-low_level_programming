#include "lists.h"
#include <stddef.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *present, *next_node;

	present = head;

	while (present != NULL)
	{
		next_node = present->next;
		free(present);
		present = next_node;
	}
}
