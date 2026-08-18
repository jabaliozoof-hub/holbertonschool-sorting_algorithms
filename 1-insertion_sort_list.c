#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using Insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current;

		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;

			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev != NULL)
			tmp->prev->next = tmp;
			else
			*list = tmp;

			print_list(*list);
		}
		current = current->next;
	}
}
