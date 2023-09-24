#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - sorts a DLL of integers in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: doubly linked list
 * Return: no return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	current = *list;

	if (!list)
		return;

	while (current != NULL)
	{
		while (current && current->n > current->next->n)
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
			current->prev = temp;
			if (temp->prev != NULL)
				current = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
