#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list with a loop
 * @h: pointer to the first node in the linked list
 *
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
