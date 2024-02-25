#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nodes;

	if (list == NULL || (*list)->next == NULL)
		return;
	nodes = (*list)->next;
	while (nodes)
	{
		while ((nodes->prev) && (nodes->prev->n > nodes->n))
		{
			nodes = swap_node(nodes, list);
			print_list(*list);
		}
		nodes = nodes->next;
	}
}
