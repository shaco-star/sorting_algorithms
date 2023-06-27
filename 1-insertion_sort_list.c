#include "sort.h"

/**
 * swap - swap 2 elements in list
 *
 * @a: first element
 * @b: second element
 *
 * Return: Always 0
*/

void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - sort double-linked list
 *
 * @list: pointer to head of list
 *
 * Return: ALways 0
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->prev->n > temp->n)
		{
			swap(temp->prev, temp);
			if (!temp->prev)
				*list = temp;
			print_list((const listint_t *)*list);
		}
		current = current->next;
	}
}
