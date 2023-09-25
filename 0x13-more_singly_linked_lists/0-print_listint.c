#include "lists.h"
/**
 * print_listint - to print all the elements from a list.
 * @h: head pointer.
 *
 * Return: nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
