#include "lists.h"
#include <stdio.h>
/**
 * is_palindrome- Checks if a string is a paliandrome
 * @head: Pointer to list
 * Return: 0 if not paliandrome, 1 if otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp_list, *inbtwn;
	int len, x;

	if (head == NULL || *head == NULL)
		return(1);
	temp_list = *head;
	inbtwn = *head;

	for (len = 0; temp_list != NULL; len++)
		temp_list = temp_list->next;
	len = len / 2;

	for(x = 1; x < len; x++)
		inbtwn = inbtwn->next;
	if (len % 2 != 0 && len != 1)
	{
		inbtwn = inbtwn->next;
		len = len - 1;
	}
	rev_list(&inbtwn);
	x = cmp_lists(*head, inbtwn, len);

	return (x);
}
/**
 * cmp_lists - gets diff btwn 2 lists
 * @head: pointer to node
 * @inbtwn: points middle node
 * @len: list length
 * Return: 1 if similar, 0 if not
 */
int cmp_lists(listint_t *head, listint_t *inbtwn, int len)
{
	int x;

	if (head == NULL || inbtwn == NULL)
		return (1);
	for (x =0; x < len; x++)
	{
		if (head->n != inbtwn->n)
			return (0);
		head = head->next;
		inbtwn = inbtwn->next;
	}
	return (1);
}

/**
 * rev_list- reverse list
 * @head: ptr to node
 */
void rev_list(listint_t **head)
{
	listint_t *curr, *new, *old;

	if (head == NULL || *head == NULL)
		return;

	old = NULL;
	curr = *head;
	while (curr != NULL)
	{
		new = curr->next;
		curr->next = old;
		old = curr;
		curr = new;
	}
	*head = old;
}
