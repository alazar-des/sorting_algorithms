#include <stdlib.h>
#include "sort.h"
#include <stdio.h>

/**
 * swap_dnode - swap two nodes of doubly linked list
 * @left: left node
 * @right: right node
 */
void swap_dnode(listint_t *left, listint_t *right)
{
	if (right->next != NULL)
		right->next->prev = left;
	if (left->prev != NULL)
		left->prev->next = right;
	left->next = right->next;
	right->next = left;
	right->prev = left->prev;
	left->prev = right;
}

/**
 * insertion_sort_list - insertion sort algorithm
 * @list: pointer to the head node pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t  *i, *j, *next;

	if (list != NULL)
	{
		if (*list != NULL)
			i = (*list)->next;
		while (i != NULL)
		{
			next = i->next;
			j = i;
			while (j->prev != NULL && j->n < j->prev->n)
			{
				swap_dnode(j->prev, j);
				if (j->prev == NULL)
					*list = j;
				print_list(*list);
			}
			i = next;
		}
	}
}
