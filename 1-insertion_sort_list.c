#include "sort.h"

/**
 * insertion_sort_list - sorts a dll using the Insertion sort algorithm.
 * @list: the ithe retfvbsorts a doubly linked list of integers in ascen
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *cur_node, *node_turn;

	if (list == NULL)
		return;

	node_turn = *list;
	while (node_turn)
	{
		if (node_turn->prev == NULL)
		{
			node_turn = node_turn->next;
			continue;
		}
		cur_node = node_turn;
		while (cur_node->n < cur_node->prev->n)
		{
			prev_node = cur_node->prev;

			cur_node->prev = prev_node->prev;
			prev_node->next = cur_node->next;
			cur_node->next = prev_node;
			prev_node->prev = cur_node;
			if (prev_node->next)
				prev_node->next->prev = prev_node;
			if (cur_node->prev)
				cur_node->prev->next = cur_node;
			else
			{
				*list = cur_node;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		node_turn = node_turn->next;
	}
}
