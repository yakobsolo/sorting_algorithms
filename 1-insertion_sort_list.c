#include "sort.h"

/**
* swap_nodes - swamps two nodes
* @list: linked list
* @previnode: previous node
* @currnode: current node
*/
void swap_nodes(listint_t **list, listint_t *previnode, listint_t *currnode)
{
	listint_t *prevA, *nextB;

	if (previnode == NULL || currnode == NULL)
		return;

	prevA = previnode->prev;
	nextB = currnode->next;


	if (prevA) /* check if node A is the head node */
		prevA->next = currnode;

	if (nextB)
		nextB->prev = previnode;

	previnode->next = nextB;
	previnode->prev = currnode;
	currnode->next = previnode;
	currnode->prev = prevA;

	if (prevA == NULL)
		*list = currnode;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
* in ascending order using the insertion sort algorithm
* @list: list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current;

	if (list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current)
	{
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			swap_nodes(list, prev, current);
			print_list(*list);
			prev = current->prev;
		}
		current = current->next;
	}
}
