#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: the index of the list where the new node should be added
 * @n: value to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *iter;
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (i == idx)
				{
					new->next = iter->next;
					iter->next = new;
					return (new);
				}
				iter = iter->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
