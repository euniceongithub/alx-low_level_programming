#include "lists.h"
#include <stddef.h>
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to pointer of head
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *to_go;
	int info;

	if (*head == NULL)
		return (0);

	to_go = *head;
	info = to_go->n;

	*head = to_go->next;
	free(to_go);

	return (info);
}

