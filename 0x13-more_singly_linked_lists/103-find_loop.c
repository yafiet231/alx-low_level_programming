#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to be searched
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *no = head;
	listint_t *yes = head;

	if (!head)
		return (NULL);

	while (no && yes && yes->next)
	{
		yes = yes->next->next;
		no = no->next;
		if (yes == no)
		{
			no = head;
			while (no != yes)
			{
				no = no->next;
				yes = yes->next;
			}
			return (yes);
		}
	}

	return (NULL);
}
