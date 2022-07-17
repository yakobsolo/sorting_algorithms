#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void swap_nodes(listint_t **list, listint_t *nodeA, listint_t *nodeB);
void insertion_sort_list(listint_t **list);
#endif
