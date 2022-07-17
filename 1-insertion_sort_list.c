#include "sort.h"

/**
* swap_nodes - swaps two nodes
* @list: linked list
* @previousnode: first node
* @currentnode: second node
*/
void swap_nodes(listint_t **list, listint_t *previousnode, listint_t *currentnode)
{
	listint_t *prevA, *nextB;

	if (previousnode == NULL || currentnode == NULL)
		return;

	prevA = previousnode->prev;
	nextB = currentnode->next;


	if (prevA)
		prevA->next = currentnode;

	if (nextB)
		nextB->prev = previousnode;

	previousnode->next = nextB;
	previousnode->prev = currentnode;
	currentnode->next = previousnode;
	currentnode->prev = prevA;

	if (prevA == NULL)
		*list = currentnode;
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
