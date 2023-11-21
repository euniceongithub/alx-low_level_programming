#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head
 *
 * Return:  sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *present;

	total = 0;
	present = head;

	while (present != NULL)
	{
		total += present->n;
		present = present->next;
	}

	return (total);
}
