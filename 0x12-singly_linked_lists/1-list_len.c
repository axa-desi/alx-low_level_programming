#include "lists.h"
/**
 *list_len - function returns count of element
 *@h: pointer to node
 *Return: @count exixting number of node
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
