#include "lists.h"

/**
 * check_cycle - looks singly linked list for cycle in it.
 * @list: points to 1st node
 * Return: 0 if no cycle, 1 if yes
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr1, *ptr2;

	if (list == NULL || list->next == NULL)
		return (0);
	ptr1 = list;
	ptr2 = ptr1->next;

	while (ptr1 != NULL && ptr2->next != NULL
		&& ptr2->next->next != NULL)
	{
		if (ptr1 == ptr2)
			return (1);
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
	}
	return (0);
}
