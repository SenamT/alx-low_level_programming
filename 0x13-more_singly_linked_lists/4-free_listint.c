#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: linked list listint_t which need to be freed
 *
 * Return: frees a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
