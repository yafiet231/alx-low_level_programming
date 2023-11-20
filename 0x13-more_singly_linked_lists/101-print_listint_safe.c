#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list with a loop.
 * @head: pointer to the 1st node of the linked list
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t i = 0;
	size_t new;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		i++;
		tmp_n = tmp_n->next;
		l_n = head;
		new = 0;
		while (new < i)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (i);
			}
			l_n = l_n->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
