#include "lists.h"
#include <stddef.h>
/**
 * insert_node- Function inserts no. in a sorted singly linked list
 * @head: Pointer to node
 * @number:int to add
 * Return: ptr to new node or 0 if failure
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *shee;

	shee = malloc(sizeof(listint_t));
	if (shee == NULL)
		return (NULL);
	shee->n = number;

	if (node == NULL || node->n >= number)
	{
		shee->next = node;
		*head = shee;
		return (shee);
	}
	while (node && node->next && node->n < number)
		node = node->next;
	shee->next = node->next;
	node->next = shee;
	return (shee);
}
