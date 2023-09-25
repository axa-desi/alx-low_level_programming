#include "lists.h"
/**
 * add_nodeint - to add new node at the beginning of list
 * @head: head of a list.
 * @n: the element
 *
 * Return: the new element and NUll when failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
