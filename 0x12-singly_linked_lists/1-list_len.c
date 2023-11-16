#include "lists.h"
/**
 *list_len - function that returns count of elements
 *@h: pointer to node
 *Return: @count the number of nodes existing
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
