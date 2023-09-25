#include "lists.h"
/**
 * sum_listint - to print sum of all the data (n) of list
 * @head: list head
 *
 * Return: sum data.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
